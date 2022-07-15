Pod::Spec.new do |spec|
    spec.name                     = 'FunnelConnectSDK'
    spec.version                  = '0.1.9'
    spec.summary                  = 'FunnelConnectSDK for iOS'
    spec.homepage                 = 'https://github.com/Teavaro/FunnelConnect-iOS-SDK'
    spec.source                   = { :git=> 'https://github.com/Teavaro/FunnelConnect-iOS-SDK.git', :tag => spec.version.to_s }
    spec.pod_target_xcconfig      = { 'EXCLUDED_ARCHS[sdk=iphonesimulator*]' => 'arm64' }
    spec.user_target_xcconfig     = { 'EXCLUDED_ARCHS[sdk=iphonesimulator*]' => 'arm64' }
    spec.authors                  = 'Teavaro'
    spec.license                  = { :type => 'Commercial', :file => 'LICENSE' }
    spec.vendored_frameworks      = 'funnelConnectSDK.xcframework'
    spec.libraries                = 'c++'
    spec.ios.deployment_target    = '12'
end