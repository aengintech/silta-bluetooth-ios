Pod::Spec.new do |s|
  s.name         = "SiltaBluetooth"
  s.version      = "0.2.0"
  s.summary      = "SiltaBluetooth for easy to use BLE."
  s.homepage     = "https://github.com/aengintech/silta-bluetooth-ios"
  s.license      = { :type => "Aengin inc", :file => "LICENSE" }
  s.author       = { "Aengin" => "manager@aengin.com" }
  s.platform     = :ios
  s.ios.deployment_target = '8.0'
  s.source       = { :git => "https://github.com/aengintech/silta-bluetooth-ios.git", :tag => "0.1.8"  }
  s.ios.preserve_paths  = 'Framework/*.{framework}'
  s.ios.vendored_frameworks = 'Framework/SiltaBluetooth.framework'
  s.ios.xcconfig = { 'LD_RUNPATH_SEARCH_PATHS' => '"$(PODS_ROOT)/Framework"' }
  s.ios.resource = 'Framework/SiltaBluetooth.framework'
  
  s.requires_arc = true

end
