
task default: 'hello'

file 'hello' => 'hello.o'

file 'hello.o' => ['Makefile', 'hello.c'] do
  sh 'make'
end

file 'Makefile' => ['hello.c'] do
  sh 'ruby extconf.rb'
end
