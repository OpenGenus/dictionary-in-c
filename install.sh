#!bin/bash

if [ ! -d $HOME/mydict ]
then
    mkdir $HOME/mydict
fi

cp data_base $HOME/mydict
cp mydict $HOME/mydict

echo "export PATH=$PATH:$HOME/mydict/" >> $HOME/.bashrc

source $HOME/.bashrc