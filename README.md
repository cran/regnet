
<!-- README.md is generated from README.Rmd. Please edit that file -->
regnet
======

This package provides procedures for fitting network-based regularization, minimax concave penalty (MCP) and lasso penalty for generalized linear models. This first version, regent0.1.0, focuses on binary outcomes. Functions for continuous, survival outcomes and other regularization methods will be included in the forthcoming upgraded version.

How to install
--------------

Run these two lines of code in R

    install.packages("devtools")
    devtools::install_github("jrhub/regnet")

Examples
--------

### Example.1 (CV.NetLogistic)

    result = CV.NetLogistic(regnet$X, regnet$Y, lamb.2 = 1, r = 4.5)  
    result$lambda  
    b = NetLogistic(regnet$X, regnet$Y, result$lambda[1,2], result$lambda[1,1])  
    index = which(regnet$beta != 0)  
    pos = which(b != 0)  
    tp = length(intersect(index, pos))  
    fp = length(pos) - tp  
    list(tp=tp, fp=fp)  

### Example.2 (CV.McpLogistic)

    result = CV.McpLogistic(regnet$X, regnet$Y, r = 4.5)  
    result$lambda  
    b = McpLogistic(regnet$X, regnet$Y, result$lambda[1])  
    index = which(regnet$beta != 0)  
    pos = which(b != 0)  
    tp = length(intersect(index, pos))  
    fp = length(pos) - tp  
    list(tp=tp, fp=fp)  

[![Travis-CI Build Status](https://travis-ci.org/jrhub/regnet.svg?branch=master)](https://travis-ci.org/jrhub/regnet)
