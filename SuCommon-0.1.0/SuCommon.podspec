Pod::Spec.new do |s|
  s.name = "SuCommon"
  s.version = "0.1.0"
  s.summary = "\u5171\u540C\u5E93"
  s.license = {"type"=>"MIT", "file"=>"LICENSE"}
  s.authors = {"aeagle"=>"aeagle@qq.com"}
  s.homepage = "https://github.com/yyyear/SuCommon"
  s.description = "TODO: Add long description of the pod here."
  s.source = { :path => '.' }

  s.ios.deployment_target    = '10.0'
  s.ios.vendored_framework   = 'ios/SuCommon.framework'
end
