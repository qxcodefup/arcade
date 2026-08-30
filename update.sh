#!/bin/bash

find . -type d -name "__pycache__" -exec rm -rf {} +

# abort if we get any error
set -e 
echo "Verificando indexer"
tko build index README.md labs
echo "Atualizando Readmes"
tko build all labs/* -m
echo "Fim"
