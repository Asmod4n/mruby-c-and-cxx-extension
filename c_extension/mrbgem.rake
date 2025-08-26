MRuby::Gem::Specification.new('c-extension') do |spec|
  spec.name = 'c-extension'
  spec.author = 'Hendrik'
  spec.license = ''
  spec.add_dependency 'mruby-errno'
  #spec.add_dependency 'cpp-extension'
  spec.add_dependency 'mruby-io-uring'
end
