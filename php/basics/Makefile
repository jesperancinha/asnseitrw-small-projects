install-php:
	sudo apt install php-common libapache2-mod-php php-cli composer
	make install-ubuntu-libs
	sudo ln -s /usr/include/x86_64-linux-gnu/curl /usr/include/curl
	curl -L https://raw.githubusercontent.com/phpenv/phpenv-installer/master/bin/phpenv-installer | bash
	git clone https://github.com/php-build/php-build.git $HOME/.phpenv/plugins/php-build
	make install-php-env
	make install-zendframework
install-zendframework:
	composer require zendframework/zendframework
install-php-env:
	phpenv install 7.4.33
	phpenv local 7.4.33
install-ubuntu-libs:
	sudo apt-get -y update
	sudo apt-get -y upgrade
	sudo apt-get install -y bzip2
	sudo apt-get install -y libbz2-dev
	sudo apt-get install -y libcurl4-gnutls-dev
	sudo apt-get install -y libpng-dev
	sudo apt-get install -y libjpeg-turbo8-dev
	sudo apt-get install -y libicu-dev
	sudo apt-get install -y libtidy-dev
	sudo apt-get install -y libxslt-dev
	sudo apt-get install -y autoconf bison build-essential curl gettext git libgd-dev libcurl4-openssl-dev libedit-dev libicu-dev libjpeg-dev libmysqlclient-dev libonig-dev libpng-dev libpq-dev libreadline-dev libsqlite3-dev libssl-dev libxml2-dev libzip-dev openssl pkg-config re2c zlib1g-dev
install-php-alternative:
	sudo add-apt-repository ppa:sergey-dryabzhinsky/php74
	sudo add-apt-repository ppa:sergey-dryabzhinsky/php7-modules
	sudo add-apt-repository ppa:sergey-dryabzhinsky/backports
	sudo add-apt-repository ppa:sergey-dryabzhinsky/packages
	sudo apt -y install php7.4
	sudo update-alternatives --config php
run-example:
	php -S localhost:8080
	open http://localhost:8080
