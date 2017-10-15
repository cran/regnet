#include<RcppArmadillo.h>
// [[Rcpp::depends(RcppArmadillo)]]
#include"LogitCD.h"

using namespace Rcpp;
using namespace arma;

// [[Rcpp::export]]
arma::vec RunNet(arma::mat& x, arma::vec& y, double lam1, double lam2, arma::vec b, double r, arma::mat& a, int n, int p)
{
  int count = 0;
  arma::vec bnew;
  while(count < 20){
    bnew = Network(x, y, lam1, lam2, b, r, a, n, p);
    double dif = arma::accu(arma::abs(b - bnew))/n;
    if(dif < 0.001) break;
    else{
      b = bnew;
      count++;
    }
  }
  return(bnew);
}

// [[Rcpp::export]]
arma::vec RunMCP(arma::mat& x, arma::vec& y, double lambda, arma::vec b, double r, int n, int p)
{
  int count = 0;
  arma::vec bnew;
  while(count < 20){
    bnew = MCP(x, y, lambda, b, r, n, p);
    double dif = arma::accu(arma::abs(b - bnew))/n;
    if(dif < 0.001) break;
    else{
      b = bnew;
      count++;
    }
  }
  return(bnew);
}

// [[Rcpp::export]]
arma::vec RunElastic(arma::mat& x, arma::vec& y, double lambda, arma::vec b, double alpha, int n, int p)
{
  int count = 0;
  arma::vec bnew;
  while(count < 20){
    bnew = Elastic(x, y, lambda, b, alpha, n, p);
    double dif = arma::accu(arma::abs(b - bnew))/n;
    if(dif < 0.001) break;
    else{
      b = bnew;
      count++;
    }
  }
  return(bnew);
}
