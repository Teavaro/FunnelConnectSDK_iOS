Pod::Spec.new do |spec|
    spec.name                     = 'funnelConnectSDK'
    spec.version                  = ENV['LIB_VERSION'] || '1.0' #fallback to major version
    spec.summary                  = 'funnelConnectSDK for iOS'
    spec.homepage                 = 'https://github.com/Teavaro/FunnelConnect-iOS-SDK'
    spec.source                   = { :git=> 'https://github.com/Teavaro/FunnelConnect-iOS-SDK.git', :tag => spec.version }
    spec.pod_target_xcconfig      = { 'EXCLUDED_ARCHS[sdk=iphonesimulator*]' => 'arm64' }
    spec.user_target_xcconfig     = { 'EXCLUDED_ARCHS[sdk=iphonesimulator*]' => 'arm64' }
    spec.authors                  = { 'UTIQ' => 'ahmad.mahmoud@teavaro.org' }
    spec.license                  = 'Commercial'
    spec.vendored_frameworks      = 'funnelConnectSDK.xcframework'
    spec.libraries                = 'c++'
    spec.ios.deployment_target    = '12'
end