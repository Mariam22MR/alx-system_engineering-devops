#!/usr/bin/env ruby
#Ruby script accept one arg and pass to regular expression matching method.

puts ARGV[0].scan(/^h.n$/).join
