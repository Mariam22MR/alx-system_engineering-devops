# Using Puppet, create a manifest that kills process named killmenow
exec { 'pkill killmenow':
  path => '/usr/bin:/usr/sbin:/bin'
}
