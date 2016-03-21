// Generated by Apple Swift version 2.1.1 (swiftlang-700.1.101.15 clang-700.1.81)
#pragma clang diagnostic push

#if defined(__has_include) && __has_include(<swift/objc-prologue.h>)
# include <swift/objc-prologue.h>
#endif

#pragma clang diagnostic ignored "-Wauto-import"
#include <objc/NSObject.h>
#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>

#if defined(__has_include) && __has_include(<uchar.h>)
# include <uchar.h>
#elif !defined(__cplusplus) || __cplusplus < 201103L
typedef uint_least16_t char16_t;
typedef uint_least32_t char32_t;
#endif

typedef struct _NSZone NSZone;

#if !defined(SWIFT_PASTE)
# define SWIFT_PASTE_HELPER(x, y) x##y
# define SWIFT_PASTE(x, y) SWIFT_PASTE_HELPER(x, y)
#endif
#if !defined(SWIFT_METATYPE)
# define SWIFT_METATYPE(X) Class
#endif

#if defined(__has_attribute) && __has_attribute(objc_runtime_name)
# define SWIFT_RUNTIME_NAME(X) __attribute__((objc_runtime_name(X)))
#else
# define SWIFT_RUNTIME_NAME(X)
#endif
#if defined(__has_attribute) && __has_attribute(swift_name)
# define SWIFT_COMPILE_NAME(X) __attribute__((swift_name(X)))
#else
# define SWIFT_COMPILE_NAME(X)
#endif
#if !defined(SWIFT_CLASS_EXTRA)
# define SWIFT_CLASS_EXTRA
#endif
#if !defined(SWIFT_PROTOCOL_EXTRA)
# define SWIFT_PROTOCOL_EXTRA
#endif
#if !defined(SWIFT_ENUM_EXTRA)
# define SWIFT_ENUM_EXTRA
#endif
#if !defined(SWIFT_CLASS)
# if defined(__has_attribute) && __has_attribute(objc_subclassing_restricted) 
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# else
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# endif
#endif

#if !defined(SWIFT_PROTOCOL)
# define SWIFT_PROTOCOL(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
# define SWIFT_PROTOCOL_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
#endif

#if !defined(SWIFT_EXTENSION)
# define SWIFT_EXTENSION(M) SWIFT_PASTE(M##_Swift_, __LINE__)
#endif

#if !defined(OBJC_DESIGNATED_INITIALIZER)
# if defined(__has_attribute) && __has_attribute(objc_designated_initializer)
#  define OBJC_DESIGNATED_INITIALIZER __attribute__((objc_designated_initializer))
# else
#  define OBJC_DESIGNATED_INITIALIZER
# endif
#endif
#if !defined(SWIFT_ENUM)
# define SWIFT_ENUM(_type, _name) enum _name : _type _name; enum SWIFT_ENUM_EXTRA _name : _type
#endif
typedef float swift_float2  __attribute__((__ext_vector_type__(2)));
typedef float swift_float3  __attribute__((__ext_vector_type__(3)));
typedef float swift_float4  __attribute__((__ext_vector_type__(4)));
typedef double swift_double2  __attribute__((__ext_vector_type__(2)));
typedef double swift_double3  __attribute__((__ext_vector_type__(3)));
typedef double swift_double4  __attribute__((__ext_vector_type__(4)));
typedef int swift_int2  __attribute__((__ext_vector_type__(2)));
typedef int swift_int3  __attribute__((__ext_vector_type__(3)));
typedef int swift_int4  __attribute__((__ext_vector_type__(4)));
#if defined(__has_feature) && __has_feature(modules)
@import ObjectiveC;
@import Foundation;
#endif

#pragma clang diagnostic ignored "-Wproperty-attribute-mismatch"
#pragma clang diagnostic ignored "-Wduplicate-method-arg"
@class CBPeripheral;
@class NSNumber;


/// 用來封裝單一 BLE 裝置的資訊
SWIFT_CLASS("_TtC14SiltaBluetooth9Bluetooth")
@interface Bluetooth : NSObject
@property (nonatomic, strong) CBPeripheral * __nullable ble;
@property (nonatomic, copy) NSString * __nullable manufacturer;
@property (nonatomic, copy) NSString * __nullable UUID;
@property (nonatomic, strong) NSNumber * __nullable powerLevel;
@property (nonatomic, strong) NSNumber * __nullable RSSI;
@property (nonatomic, copy) NSString * __nullable name;
@property (nonatomic, copy) NSString * __null_unspecified time;
- (NSInteger)accuracy;
- (BOOL)isEqual:(id __nullable)object;
@property (nonatomic, readonly) NSUInteger hash;
@end



/// Protocol to be used for logging debug and informational messages from the SDK. Implementations of this protocol can be provided to the |GAI| class, to be used as the logger by the SDK.  See the |logger| property in GAI.h.
SWIFT_PROTOCOL("_TtP14SiltaBluetooth7ILogger_")
@protocol ILogger <NSObject>
@optional

/// Logs message with log level |Verbose|.
- (void)verbose:(NSString * __nonnull)message;

/// Logs message with log level |info|.
- (void)info:(NSString * __nonnull)message;

/// Logs message with log level |debug|.
- (void)debug:(NSString * __nonnull)message;

/// Logs message with log level |warning|.
- (void)warning:(NSString * __nonnull)message;

/// Logs message with log level |error|.
- (void)error:(NSString * __nonnull)message;
@end


@interface NSData (SWIFT_EXTENSION(SiltaBluetooth))

/// Return hexadecimal string representation of NSData bytes
@property (nonatomic, readonly, copy) NSString * __nonnull kdj_hexadecimalString;
@end



/// 提供追蹤藍芽元件運行機制的各種方式
SWIFT_PROTOCOL("_TtP14SiltaBluetooth22SiltaBluetoothDelegate_")
@protocol SiltaBluetoothDelegate <NSObject>
@optional

/// 裝置清單已更新
- (void)bluetoothDeviceListBeenRenewed:(NSArray<Bluetooth *> * __nonnull)bles;

/// 指令執行成功
///
/// \param ble Bluetooth
- (void)bluetoothExecuteCommandSuccess:(Bluetooth * __nonnull)ble;

/// 指令執行失敗
///
/// \param ble Bluetooth
- (void)bluetoothExecuteCommandFailure:(Bluetooth * __nonnull)ble;

/// 藍芽裝置已開啟
- (void)bluetoothabled;

/// 藍芽裝置未開啟
- (void)bluetoothDisabled;

/// 藍芽裝置未授權使用
- (void)bluetoothUnauthorized;

/// 裝置上無藍芽裝置
- (void)bluetoothUnsupported;
@end

#pragma clang diagnostic pop
