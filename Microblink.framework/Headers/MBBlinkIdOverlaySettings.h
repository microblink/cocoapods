//
//  MBBlinkIdOverlaySettings.h
//  MicroblinkDev
//
//  Created by Jura Skrlec on 03/06/2019.
//

#import "MBBaseOverlaySettings.h"

NS_ASSUME_NONNULL_BEGIN

/**
 * Settings class containing parameters for BlinkId UI
 */
MB_CLASS_AVAILABLE_IOS(8.0)
@interface MBBlinkIdOverlaySettings : MBBaseOverlaySettings

/**
 * If YES, MBBlinkIdCombinedRecognizer will check if sides do match when scanning is finished
 *
 * Default: YES
 */
@property(nonatomic, assign) BOOL requireDocumentSidesDataMatch;

/**
 * Defines whether Document Not Supported dialog will be displayed in UI.
 *
 * Default: YES
*/
@property(nonatomic, assign) BOOL showNotSupportedDialog;

/**
 * Option to configure back side scanning timeout.
 *
 * Default: 17.0
*/
@property(nonatomic, assign) NSTimeInterval backSideScanningTimeout;

/**
 * Designated initializer. Initializes the object with default settings.
 *
 *  @return object initialized with default values.
 */
- (instancetype)init NS_DESIGNATED_INITIALIZER;

@end

NS_ASSUME_NONNULL_END
