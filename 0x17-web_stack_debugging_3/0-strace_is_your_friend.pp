# Fixes "phpp" extensions to "php" in file "wp-settings.php"
# replace line containing "phpp" with "php"

exec { 'replace_line':
  command => 'sed -i s/phpp/php/g /var/www/html/wp-settings.php',
  path    => '/usr/local/bin/:/bin/'
}
