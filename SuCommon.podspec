#
# Be sure to run `pod lib lint SuCommon.podspec' to ensure this is a
# valid spec before submitting.
#
# Any lines starting with a # are optional, but their use is encouraged
# To learn more about a Podspec see https://guides.cocoapods.org/syntax/podspec.html
#

Pod::Spec.new do |s|
  s.name             = 'SuCommon'
  s.version          = '0.1.8'
  s.summary          = '共同库'

# This description is used to generate tags and improve search results.
#   * Think: What does it do? Why did you write it? What is the focus?
#   * Try to keep it short, snappy and to the point.
#   * Write the description between the DESC delimiters below.
#   * Finally, don't worry about the indent, CocoaPods strips it!

  s.description      = <<-DESC
TODO: Add long description of the pod here.
                       DESC

  s.homepage         = 'https://github.com/yyyear/SuCommon'
  # s.screenshots     = 'www.example.com/screenshots_1', 'www.example.com/screenshots_2'
  s.license          = { :type => 'MIT', :file => 'LICENSE' }
  s.author           = { 'aeagle' => 'aeagle@qq.com' }
  s.source           = { :git => 'https://github.com/yyyear/SuCommon.git', :tag => s.version.to_s }
  # s.social_media_url = 'https://twitter.com/<TWITTER_USERNAME>'

  s.ios.deployment_target = '10.0'

  
  s.ios.vendored_frameworks = 'SuCommon/Frameworks/*.framework'
  s.libraries = 'z', 'sqlite3'
  # s.resource_bundles = {
  #   'SuCommon' => ['SuCommon/Assets/*.png']
  # }

  # s.public_header_files = 'Pod/Classes/**/*.h'
  s.frameworks = 'UIKit', 'AdSupport', 'WebKit','Foundation'
  # s.dependency 'AFNetworking', '~> 2.3'
end
