Pod::Spec.new do |s|
  s.platform     = :ios, '7.0'
  s.name         = "KTSecretTextView"
  s.version      = "0.0.1"
  s.summary      = "Secret Text View"
  s.homepage = 'https://github.com/kenshin03/KTSecretTextView'
  s.license         = { :type => 'MIT', :file => 'LICENSE' }
  s.author   = { 'Kenny Tang' => 'https://github.com/kenshin03' }
  s.source       = { :git => "https://github.com/steve21124/KTSecretTextView.git" }
  s.screenshots = ["https://raw.githubusercontent.com/kenshin03/KTSecretTextView/master/SecretTextView/Resources/Screenshots/KTSecretTextView-screenshot1.png", "https://raw.githubusercontent.com/kenshin03/KTSecretTextView/master/SecretTextView/Resources/Screenshots/KTSecretTextView-screenshot3.png"]
  s.resources 		= 'SecretTextView/Resources/**/*.*'
  s.source_files 	= 'SecretTextView/**/*.{h,m}'
  s.requires_arc = true
  s.xcconfig = { 'HEADER_SEARCH_PATHS' => '$(SDKROOT)/usr/include/libxml2' }
  s.dependency 'UIImage-Resize'
  s.dependency 'DZNPhotoPickerController'
  s.ios.frameworks = 'Accounts',  'Social'
end
