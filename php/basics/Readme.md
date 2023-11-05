## Installation notes (Debian Linux)

```shell
sudo apt install php-common libapache2-mod-php php-cli composer
composer require zendframework/zendframework
curl -L https://raw.githubusercontent.com/phpenv/phpenv-installer/master/bin/phpenv-installer \
    | bash
git clone https://github.com/php-build/php-build.git $HOME/.phpenv/plugins/php-build
```

## Startup

```shell
export PHPENV_ROOT="/home/$USER/.phpenv"
if [ -d "${PHPENV_ROOT}" ]; then
  export PATH="${PHPENV_ROOT}/bin:${PATH}"
  eval "$(phpenv init -)"
fi
```

## References

-   https://www.php.net/manual/en/install.php
-   https://github.com/phpenv/phpenv-installer
-   https://framework.zend.com/downloads.html
-   https://www.php.net/manual/en/language.types.boolean.php
