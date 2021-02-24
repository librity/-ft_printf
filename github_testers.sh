# INSTALL VALGRIND
cd ~
rm -rf $HOME/.brew && \
	git clone --depth=1 https://github.com/Homebrew/brew $HOME/.brew && \
	echo 'export PATH=$HOME/.brew/bin:$PATH' >> $HOME/.zshrc && \
	source $HOME/.zshrc && \
	brew update
curl https://raw.githubusercontent.com/sowson/valgrind/master/valgrind.rb > valgrind.rb
brew install --HEAD valgrind.rb

# CLONE YOUR PROJECT
cd ~
git clone 42_INTRA_REPO_ADDRESS gnl
cd gnl
norminette *.c *.h

# CLONE ALL GITHUB TESTERS
git clone https://github.com/cclaude42/PFT_2019.git
git clone https://github.com/Mazoise/42TESTERS-PRINTF.git
git clone https://github.com/cacharle/ft_printf_test.git
chmod 777 */*.sh

# RUN PFT_2019
cd PFT_2019

cd ..

# RUN 42TESTERS-PRINTF
cd 42TESTERS-PRINTF

cd ..

# RUN ft_printf_test
cd ft_printf_test

cd ..
