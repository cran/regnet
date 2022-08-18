
#include<RcppArmadillo.h>
// [[Rcpp::depends(RcppArmadillo)]]
#include"RunSurv.h"
#include"Utilities.h"

using namespace Rcpp;
using namespace arma;
//using namespace R;


// [[Rcpp::export()]]
arma::mat SurvGrid(arma::mat const &xc, arma::mat const &xg, arma::vec const &y, arma::mat const &x2, arma::vec const &y2, arma::vec const &lamb1, arma::vec const &lamb2, arma::vec bc, arma::vec bg, double r, arma::mat const &a, int p, int pc, bool robust, char method, bool debugging)
{
	arma::vec btmp, triRowAbsSums;
    arma::mat CVM(lamb1.n_elem, lamb2.n_elem, fill::zeros);
	
	if(robust){
		for(unsigned int j=0; j<lamb2.n_elem ; j++){
			for(unsigned int i=0; i<lamb1.n_elem ; i++){
				btmp = RunSurv_robust(xc, xg, y, lamb1(i), lamb2(j), bc, bg, r, a, p, pc, method, debugging);
				CVM(i, j) = validation_LAD(x2, y2, btmp);
				Rcpp::checkUserInterrupt();
			}
		}
	}else{
		if(method == 'n') triRowAbsSums = TriRowAbsSums(a);
		for(unsigned int j=0; j<lamb2.n_elem ; j++){
			for(unsigned int i=0; i<lamb1.n_elem ; i++){
				btmp = RunSurv(xc, xg, y, lamb1(i), lamb2(j), bc, bg, r, a, triRowAbsSums, p, pc, method);
				CVM(i, j) = validation_LS(x2, y2, btmp);
				Rcpp::checkUserInterrupt();
			}
		}
	}
	
    return CVM;
}

/* 
// [[Rcpp::export()]]
arma::mat SurvGrid_MC(arma::mat const &xc, arma::mat const &xg, arma::vec const &y, arma::mat const &x2, arma::vec const &y2, arma::vec const &lamb1, arma::vec const &lamb2, arma::vec bc, arma::vec bg, double r, arma::mat const &a, int p, int pc, bool robust, char method, int ncores, bool debugging)
{
	arma::vec btmp, triRowAbsSums;
    arma::mat CVM(lamb1.n_elem, lamb2.n_elem, fill::zeros);
	omp_set_num_threads(ncores);
	
	if(robust){
		#pragma omp parallel for collapse(2) private(btmp)
		for(unsigned int j=0; j<lamb2.n_elem ; j++){
			for(unsigned int i=0; i<lamb1.n_elem ; i++){
				btmp = RunSurv_robust(xc, xg, y, lamb1(i), lamb2(j), bc, bg, r, a, p, pc, method, debugging);
				CVM(i, j) = validation_LAD(x2, y2, btmp);
			}
		}
	}else{
		if(method == 'n') triRowAbsSums = TriRowAbsSums(a);
		#pragma omp parallel for collapse(2) private(btmp)
		for(unsigned int j=0; j<lamb2.n_elem ; j++){
			for(unsigned int i=0; i<lamb1.n_elem ; i++){
				btmp = RunSurv(xc, xg, y, lamb1(i), lamb2(j), bc, bg, r, a, triRowAbsSums, p, pc, method);
				CVM(i, j) = validation_LS(x2, y2, btmp);
			}
		}
	}
	
    return CVM;
}

 */
 
 
 
