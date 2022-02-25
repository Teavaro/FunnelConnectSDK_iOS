#import <Foundation/NSArray.h>
#import <Foundation/NSDictionary.h>
#import <Foundation/NSError.h>
#import <Foundation/NSObject.h>
#import <Foundation/NSSet.h>
#import <Foundation/NSString.h>
#import <Foundation/NSValue.h>

@class FCSDKIdcData, FCSDKCdpPermissions, NSURL, FCSDKFCOptions, FCSDKFunnelConnectSDK, FCSDKReference<__covariant T>, FCSDKKotlinThrowable, FCSDKKotlinArray<T>, FCSDKKotlinException, FCSDKRestClientException;

@protocol FCSDKCdpServices, FCSDKTrustPidServices, FCSDKFunnelConnect, FCSDKRoute, FCSDKKotlinIterator;

NS_ASSUME_NONNULL_BEGIN
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wunknown-warning-option"
#pragma clang diagnostic ignored "-Wincompatible-property-type"
#pragma clang diagnostic ignored "-Wnullability"

#pragma push_macro("_Nullable_result")
#if !__has_feature(nullability_nullable_result)
#undef _Nullable_result
#define _Nullable_result _Nullable
#endif

__attribute__((swift_name("KotlinBase")))
@interface FCSDKBase : NSObject
- (instancetype)init __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
+ (void)initialize __attribute__((objc_requires_super));
@end;

@interface FCSDKBase (FCSDKBaseCopying) <NSCopying>
@end;

__attribute__((swift_name("KotlinMutableSet")))
@interface FCSDKMutableSet<ObjectType> : NSMutableSet<ObjectType>
@end;

__attribute__((swift_name("KotlinMutableDictionary")))
@interface FCSDKMutableDictionary<KeyType, ObjectType> : NSMutableDictionary<KeyType, ObjectType>
@end;

@interface NSError (NSErrorFCSDKKotlinException)
@property (readonly) id _Nullable kotlinException;
@end;

__attribute__((swift_name("KotlinNumber")))
@interface FCSDKNumber : NSNumber
- (instancetype)initWithChar:(char)value __attribute__((unavailable));
- (instancetype)initWithUnsignedChar:(unsigned char)value __attribute__((unavailable));
- (instancetype)initWithShort:(short)value __attribute__((unavailable));
- (instancetype)initWithUnsignedShort:(unsigned short)value __attribute__((unavailable));
- (instancetype)initWithInt:(int)value __attribute__((unavailable));
- (instancetype)initWithUnsignedInt:(unsigned int)value __attribute__((unavailable));
- (instancetype)initWithLong:(long)value __attribute__((unavailable));
- (instancetype)initWithUnsignedLong:(unsigned long)value __attribute__((unavailable));
- (instancetype)initWithLongLong:(long long)value __attribute__((unavailable));
- (instancetype)initWithUnsignedLongLong:(unsigned long long)value __attribute__((unavailable));
- (instancetype)initWithFloat:(float)value __attribute__((unavailable));
- (instancetype)initWithDouble:(double)value __attribute__((unavailable));
- (instancetype)initWithBool:(BOOL)value __attribute__((unavailable));
- (instancetype)initWithInteger:(NSInteger)value __attribute__((unavailable));
- (instancetype)initWithUnsignedInteger:(NSUInteger)value __attribute__((unavailable));
+ (instancetype)numberWithChar:(char)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedChar:(unsigned char)value __attribute__((unavailable));
+ (instancetype)numberWithShort:(short)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedShort:(unsigned short)value __attribute__((unavailable));
+ (instancetype)numberWithInt:(int)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedInt:(unsigned int)value __attribute__((unavailable));
+ (instancetype)numberWithLong:(long)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedLong:(unsigned long)value __attribute__((unavailable));
+ (instancetype)numberWithLongLong:(long long)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedLongLong:(unsigned long long)value __attribute__((unavailable));
+ (instancetype)numberWithFloat:(float)value __attribute__((unavailable));
+ (instancetype)numberWithDouble:(double)value __attribute__((unavailable));
+ (instancetype)numberWithBool:(BOOL)value __attribute__((unavailable));
+ (instancetype)numberWithInteger:(NSInteger)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedInteger:(NSUInteger)value __attribute__((unavailable));
@end;

__attribute__((swift_name("KotlinByte")))
@interface FCSDKByte : FCSDKNumber
- (instancetype)initWithChar:(char)value;
+ (instancetype)numberWithChar:(char)value;
@end;

__attribute__((swift_name("KotlinUByte")))
@interface FCSDKUByte : FCSDKNumber
- (instancetype)initWithUnsignedChar:(unsigned char)value;
+ (instancetype)numberWithUnsignedChar:(unsigned char)value;
@end;

__attribute__((swift_name("KotlinShort")))
@interface FCSDKShort : FCSDKNumber
- (instancetype)initWithShort:(short)value;
+ (instancetype)numberWithShort:(short)value;
@end;

__attribute__((swift_name("KotlinUShort")))
@interface FCSDKUShort : FCSDKNumber
- (instancetype)initWithUnsignedShort:(unsigned short)value;
+ (instancetype)numberWithUnsignedShort:(unsigned short)value;
@end;

__attribute__((swift_name("KotlinInt")))
@interface FCSDKInt : FCSDKNumber
- (instancetype)initWithInt:(int)value;
+ (instancetype)numberWithInt:(int)value;
@end;

__attribute__((swift_name("KotlinUInt")))
@interface FCSDKUInt : FCSDKNumber
- (instancetype)initWithUnsignedInt:(unsigned int)value;
+ (instancetype)numberWithUnsignedInt:(unsigned int)value;
@end;

__attribute__((swift_name("KotlinLong")))
@interface FCSDKLong : FCSDKNumber
- (instancetype)initWithLongLong:(long long)value;
+ (instancetype)numberWithLongLong:(long long)value;
@end;

__attribute__((swift_name("KotlinULong")))
@interface FCSDKULong : FCSDKNumber
- (instancetype)initWithUnsignedLongLong:(unsigned long long)value;
+ (instancetype)numberWithUnsignedLongLong:(unsigned long long)value;
@end;

__attribute__((swift_name("KotlinFloat")))
@interface FCSDKFloat : FCSDKNumber
- (instancetype)initWithFloat:(float)value;
+ (instancetype)numberWithFloat:(float)value;
@end;

__attribute__((swift_name("KotlinDouble")))
@interface FCSDKDouble : FCSDKNumber
- (instancetype)initWithDouble:(double)value;
+ (instancetype)numberWithDouble:(double)value;
@end;

__attribute__((swift_name("KotlinBoolean")))
@interface FCSDKBoolean : FCSDKNumber
- (instancetype)initWithBool:(BOOL)value;
+ (instancetype)numberWithBool:(BOOL)value;
@end;

__attribute__((swift_name("TrustPidServices")))
@protocol FCSDKTrustPidServices
@required
- (BOOL)isConsentAccepted __attribute__((swift_name("isConsentAccepted()")));
- (void)rejectConsent __attribute__((swift_name("rejectConsent()")));
- (void)requestDataResultClosure:(void (^)(FCSDKIdcData *))resultClosure __attribute__((swift_name("requestData(resultClosure:)")));
- (void)startServiceAcceptedConsent:(BOOL)acceptedConsent isStub:(BOOL)isStub __attribute__((swift_name("startService(acceptedConsent:isStub:)")));
@end;

__attribute__((swift_name("CdpServices")))
@protocol FCSDKCdpServices
@required
- (FCSDKCdpPermissions *)getPermissions __attribute__((swift_name("getPermissions()")));
- (NSString * _Nullable)getUmid __attribute__((swift_name("getUmid()")));
- (NSString * _Nullable)getUserId __attribute__((swift_name("getUserId()")));
- (void)logEventKey:(NSString *)key value:(NSString *)value __attribute__((swift_name("logEvent(key:value:)")));
- (void)requestDataResultClosure_:(void (^)(NSString *))resultClosure __attribute__((swift_name("requestData(resultClosure_:)")));
- (void)reset __attribute__((swift_name("reset()")));
- (void)setUserIdId:(NSString *)id __attribute__((swift_name("setUserId(id:)")));
- (void)startServiceOmPermissionAccepted:(BOOL)omPermissionAccepted optPermissionAccepted:(BOOL)optPermissionAccepted nbaPermissionAccepted:(BOOL)nbaPermissionAccepted __attribute__((swift_name("startService(omPermissionAccepted:optPermissionAccepted:nbaPermissionAccepted:)")));
- (void)startServiceUserIdentifier:(NSString *)userIdentifier omPermissionAccepted:(BOOL)omPermissionAccepted optPermissionAccepted:(BOOL)optPermissionAccepted nbaPermissionAccepted:(BOOL)nbaPermissionAccepted __attribute__((swift_name("startService(userIdentifier:omPermissionAccepted:optPermissionAccepted:nbaPermissionAccepted:)")));
- (void)updatePermissionsOmPermissionAccepted:(BOOL)omPermissionAccepted optPermissionAccepted:(BOOL)optPermissionAccepted nbaPermissionAccepted:(BOOL)nbaPermissionAccepted __attribute__((swift_name("updatePermissions(omPermissionAccepted:optPermissionAccepted:nbaPermissionAccepted:)")));
@end;

__attribute__((swift_name("FunnelConnect")))
@protocol FCSDKFunnelConnect
@required

/**
 @note This method converts instances of Exception to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (id<FCSDKCdpServices> _Nullable)cdpAndReturnError:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("cdp()")));

/**
 @note This method converts instances of Exception to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (BOOL)clearCookiesAndReturnError:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("clearCookies()")));

/**
 @note This method converts instances of Exception to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (BOOL)clearDataAndReturnError:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("clearData()")));

/**
 @note This method converts instances of Exception to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (BOOL)initializeJsonConfigFileURL:(NSURL *)jsonConfigFileURL error:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("initialize(jsonConfigFileURL:)")));

/**
 @note This method converts instances of Exception to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (BOOL)initializeJsonConfigFileURL:(NSURL *)jsonConfigFileURL options:(FCSDKFCOptions *)options error:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("initialize(jsonConfigFileURL:options:)")));

/**
 @note This method converts instances of Exception to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (id<FCSDKTrustPidServices> _Nullable)trustPidAndReturnError:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("trustPid()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FunnelConnectSDK")))
@interface FCSDKFunnelConnectSDK : FCSDKBase <FCSDKFunnelConnect>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)funnelConnectSDK __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) FCSDKFunnelConnectSDK *shared __attribute__((swift_name("shared")));

/**
 @note This method converts instances of Exception to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (id<FCSDKCdpServices> _Nullable)cdpAndReturnError:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("cdp()")));

/**
 @note This method converts instances of Exception to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (BOOL)clearCookiesAndReturnError:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("clearCookies()")));

/**
 @note This method converts instances of Exception to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (BOOL)clearDataAndReturnError:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("clearData()")));

/**
 @note This method converts instances of Exception to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (BOOL)initializeJsonConfigFileURL:(NSURL *)jsonConfigFileURL error:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("initialize(jsonConfigFileURL:)")));

/**
 @note This method converts instances of Exception to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (BOOL)initializeJsonConfigFileURL:(NSURL *)jsonConfigFileURL options:(FCSDKFCOptions *)options error:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("initialize(jsonConfigFileURL:options:)")));

/**
 @note This method converts instances of Exception to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (id<FCSDKTrustPidServices> _Nullable)trustPidAndReturnError:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("trustPid()")));
@end;

__attribute__((swift_name("IStringUtils")))
@protocol FCSDKIStringUtils
@required
- (NSDictionary<NSString *, NSString *> *)extractKeysAndValuesFromHTMLHtmlString:(NSString *)htmlString removeCurleyBraces:(BOOL)removeCurleyBraces __attribute__((swift_name("extractKeysAndValuesFromHTML(htmlString:removeCurleyBraces:)")));
- (NSDictionary<NSString *, NSString *> *)mapFromStringString:(NSString *)string delimiter:(NSString *)delimiter keyValueDelimiter:(NSString *)keyValueDelimiter __attribute__((swift_name("mapFromString(string:delimiter:keyValueDelimiter:)")));
@end;

__attribute__((swift_name("TeavaroLogger")))
@protocol FCSDKTeavaroLogger
@required
- (BOOL)enableLogging __attribute__((swift_name("enableLogging()")));
- (void)logString:(NSString *)string __attribute__((swift_name("log(string:)")));
- (void)logTag:(NSString *)tag text:(NSString *)text __attribute__((swift_name("log(tag:text:)")));
- (void)prettyPrintText:(NSString *)text __attribute__((swift_name("prettyPrint(text:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Reference")))
@interface FCSDKReference<__covariant T> : FCSDKBase
- (instancetype)initWithCurrent:(T _Nullable)current initor:(T _Nullable (^)(void))initor __attribute__((swift_name("init(current:initor:)"))) __attribute__((objc_designated_initializer));
- (T _Nullable)component1 __attribute__((swift_name("component1()")));
- (T _Nullable (^)(void))component2 __attribute__((swift_name("component2()")));
- (FCSDKReference<T> *)doCopyCurrent:(T _Nullable)current initor:(T _Nullable (^)(void))initor __attribute__((swift_name("doCopy(current:initor:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) T _Nullable current __attribute__((swift_name("current")));
@property (readonly) T _Nullable (^initor)(void) __attribute__((swift_name("initor")));
@end;

__attribute__((swift_name("KotlinThrowable")))
@interface FCSDKKotlinThrowable : FCSDKBase
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(FCSDKKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(FCSDKKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (FCSDKKotlinArray<NSString *> *)getStackTrace __attribute__((swift_name("getStackTrace()")));
- (void)printStackTrace __attribute__((swift_name("printStackTrace()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) FCSDKKotlinThrowable * _Nullable cause __attribute__((swift_name("cause")));
@property (readonly) NSString * _Nullable message __attribute__((swift_name("message")));
- (NSError *)asError __attribute__((swift_name("asError()")));
@end;

__attribute__((swift_name("KotlinException")))
@interface FCSDKKotlinException : FCSDKKotlinThrowable
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(FCSDKKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(FCSDKKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
@end;

__attribute__((swift_name("RestClientException")))
@interface FCSDKRestClientException : FCSDKKotlinException
- (instancetype)initWithErrorMessage:(NSString *)errorMessage __attribute__((swift_name("init(errorMessage:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(FCSDKKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithCause:(FCSDKKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (readonly) NSString *errorMessage __attribute__((swift_name("errorMessage")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RestClientException.GenericError")))
@interface FCSDKRestClientExceptionGenericError : FCSDKRestClientException
- (instancetype)initWithErrorMessage:(NSString *)errorMessage __attribute__((swift_name("init(errorMessage:)"))) __attribute__((objc_designated_initializer));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RestClientException.HttpError")))
@interface FCSDKRestClientExceptionHttpError : FCSDKRestClientException
- (instancetype)initWithStatusCode:(int32_t)statusCode errorMessage:(NSString *)errorMessage __attribute__((swift_name("init(statusCode:errorMessage:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithErrorMessage:(NSString *)errorMessage __attribute__((swift_name("init(errorMessage:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (readonly) int32_t statusCode __attribute__((swift_name("statusCode")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RestClientException.InternalServerError")))
@interface FCSDKRestClientExceptionInternalServerError : FCSDKRestClientException
- (instancetype)initWithErrorMessage:(NSString *)errorMessage __attribute__((swift_name("init(errorMessage:)"))) __attribute__((objc_designated_initializer));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RestClientException.RedirectionError")))
@interface FCSDKRestClientExceptionRedirectionError : FCSDKRestClientException
- (instancetype)initWithErrorMessage:(NSString *)errorMessage __attribute__((swift_name("init(errorMessage:)"))) __attribute__((objc_designated_initializer));
@end;

__attribute__((swift_name("Route")))
@protocol FCSDKRoute
@required
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RouteGET")))
@interface FCSDKRouteGET : FCSDKBase <FCSDKRoute>
- (instancetype)initWithUrl:(NSString *)url __attribute__((swift_name("init(url:)"))) __attribute__((objc_designated_initializer));
@property (readonly) NSString *url __attribute__((swift_name("url")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RoutePOST")))
@interface FCSDKRoutePOST : FCSDKBase <FCSDKRoute>
- (instancetype)initWithUrl:(NSString *)url __attribute__((swift_name("init(url:)"))) __attribute__((objc_designated_initializer));
@property (readonly) NSString *url __attribute__((swift_name("url")));
@end;

__attribute__((swift_name("TeavaroLocalStorage")))
@protocol FCSDKTeavaroLocalStorage
@required
- (void)clear __attribute__((swift_name("clear()")));
- (BOOL)getBooleanValueKey:(NSString *)key __attribute__((swift_name("getBooleanValue(key:)")));
- (NSString * _Nullable)getStringValueKey:(NSString *)key __attribute__((swift_name("getStringValue(key:)")));
- (void)removeValueKey:(NSString *)key __attribute__((swift_name("removeValue(key:)")));
- (void)saveKey:(NSString *)key value:(BOOL)value __attribute__((swift_name("save(key:value:)")));
- (void)saveKey:(NSString *)key value_:(NSString *)value __attribute__((swift_name("save(key:value_:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FCOptions")))
@interface FCSDKFCOptions : FCSDKBase
- (instancetype)initWithEnableLogging:(BOOL)enableLogging __attribute__((swift_name("init(enableLogging:)"))) __attribute__((objc_designated_initializer));
- (BOOL)component1 __attribute__((swift_name("component1()")));
- (FCSDKFCOptions *)doCopyEnableLogging:(BOOL)enableLogging __attribute__((swift_name("doCopy(enableLogging:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) BOOL enableLogging __attribute__((swift_name("enableLogging")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("IdcData")))
@interface FCSDKIdcData : FCSDKBase
- (instancetype)initWithUmid:(NSString * _Nullable)umid mtid:(NSString * _Nullable)mtid atid:(NSString * _Nullable)atid __attribute__((swift_name("init(umid:mtid:atid:)"))) __attribute__((objc_designated_initializer));
- (NSString * _Nullable)component1 __attribute__((swift_name("component1()")));
- (NSString * _Nullable)component2 __attribute__((swift_name("component2()")));
- (NSString * _Nullable)component3 __attribute__((swift_name("component3()")));
- (FCSDKIdcData *)doCopyUmid:(NSString * _Nullable)umid mtid:(NSString * _Nullable)mtid atid:(NSString * _Nullable)atid __attribute__((swift_name("doCopy(umid:mtid:atid:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable atid __attribute__((swift_name("atid")));
@property (readonly) NSString * _Nullable mtid __attribute__((swift_name("mtid")));
@property (readonly) NSString * _Nullable umid __attribute__((swift_name("umid")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CdpPermissions")))
@interface FCSDKCdpPermissions : FCSDKBase
- (instancetype)initWithOmAccepted:(BOOL)omAccepted optAccepted:(BOOL)optAccepted nbaAccepted:(BOOL)nbaAccepted __attribute__((swift_name("init(omAccepted:optAccepted:nbaAccepted:)"))) __attribute__((objc_designated_initializer));
- (BOOL)component1 __attribute__((swift_name("component1()")));
- (BOOL)component2 __attribute__((swift_name("component2()")));
- (BOOL)component3 __attribute__((swift_name("component3()")));
- (FCSDKCdpPermissions *)doCopyOmAccepted:(BOOL)omAccepted optAccepted:(BOOL)optAccepted nbaAccepted:(BOOL)nbaAccepted __attribute__((swift_name("doCopy(omAccepted:optAccepted:nbaAccepted:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) BOOL nbaAccepted __attribute__((swift_name("nbaAccepted")));
@property (readonly) BOOL omAccepted __attribute__((swift_name("omAccepted")));
@property (readonly) BOOL optAccepted __attribute__((swift_name("optAccepted")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinArray")))
@interface FCSDKKotlinArray<T> : FCSDKBase
+ (instancetype)arrayWithSize:(int32_t)size init:(T _Nullable (^)(FCSDKInt *))init __attribute__((swift_name("init(size:init:)")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (T _Nullable)getIndex:(int32_t)index __attribute__((swift_name("get(index:)")));
- (id<FCSDKKotlinIterator>)iterator __attribute__((swift_name("iterator()")));
- (void)setIndex:(int32_t)index value:(T _Nullable)value __attribute__((swift_name("set(index:value:)")));
@property (readonly) int32_t size __attribute__((swift_name("size")));
@end;

__attribute__((swift_name("KotlinIterator")))
@protocol FCSDKKotlinIterator
@required
- (BOOL)hasNext __attribute__((swift_name("hasNext()")));
- (id _Nullable)next __attribute__((swift_name("next()")));
@end;

#pragma pop_macro("_Nullable_result")
#pragma clang diagnostic pop
NS_ASSUME_NONNULL_END
