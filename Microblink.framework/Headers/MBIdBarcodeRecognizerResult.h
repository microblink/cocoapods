//
// MBIDBarcodeRecognizerResult.h
//
// Created by juraskrlec on 16/03/2020
// Copyright © Microblink Ltd. All rights reserved.
//

#import "MBRecognizerResult.h"
#import "MBDateResult.h"
#import "MBBarcodeResult.h"
#import "MBIdBarcodeDocumentType.h"

NS_ASSUME_NONNULL_BEGIN

/**
* The ID Barcode Recognizer is used for scanning ID Barcode.
*/
MB_CLASS_AVAILABLE_IOS(8.0)
@interface MBIdBarcodeRecognizerResult : MBRecognizerResult<NSCopying>

MB_INIT_UNAVAILABLE

/**
* THe additional address information of the document owner.
*/
@property (nonatomic, readonly) NSString *additionalAddressInformation;

/**
* The additional name information of the document owner.
*/
@property (nonatomic, readonly) NSString *additionalNameInformation;

/**
* The address of the document owner.
*/
@property (nonatomic, readonly) NSString *address;

/**
* The date of birth of the document owner.
*/
@property (nonatomic, readonly) MBDateResult *dateOfBirth;

/**
* The date of expiry of the document.
*/
@property (nonatomic, readonly) MBDateResult *dateOfExpiry;

/**
* The date of issue of the document.
*/
@property (nonatomic, readonly) MBDateResult *dateOfIssue;

/**
* The additional number of the document.
*/
@property (nonatomic, readonly) NSString *documentAdditionalNumber;

/**
* The document number.
*/
@property (nonatomic, readonly) NSString *documentNumber;

/**
* The employer of the document owner.
*/
@property (nonatomic, readonly) NSString *employer;

/**
* The first name of the document owner.
*/
@property (nonatomic, readonly) NSString *firstName;

/**
* The full name of the document owner.
*/
@property (nonatomic, readonly) NSString *fullName;

/**
* The issuing authority of the document.
*/
@property (nonatomic, readonly) NSString *issuingAuthority;

/**
* The last name of the document owner.
*/
@property (nonatomic, readonly) NSString *lastName;

/**
* The marital status of the document owner.
*/
@property (nonatomic, readonly) NSString *maritalStatus;

/**
* The nationality of the documet owner.
*/
@property (nonatomic, readonly) NSString *nationality;

/**
* The personal identification number.
*/
@property (nonatomic, readonly) NSString *personalIdNumber;

/**
* The place of birth of the document owner.
*/
@property (nonatomic, readonly) NSString *placeOfBirth;

/**
* The profession of the document owner.
*/
@property (nonatomic, readonly) NSString *profession;

/**
* The race of the document owner.
*/
@property (nonatomic, readonly) NSString *race;

/**
* The religion of the document owner.
*/
@property (nonatomic, readonly) NSString *religion;

/**
* The residential stauts of the document owner.
*/
@property (nonatomic, readonly) NSString *residentialStatus;

/**
* The sex of the document owner.
*/
@property (nonatomic, readonly) NSString *sex;

/**
 * Byte array with result of the scan
 */
@property(nonatomic, strong, readonly, nullable) NSData* rawData;

/**
 * Retrieves string content of scanned data
 */
@property(nonatomic, strong, readonly, nullable) NSString* stringData;

/**
 * Flag indicating uncertain scanning data
 * E.g obtained from damaged barcode.
 */
@property(nonatomic, assign, readonly) BOOL uncertain;

/**
 * Type of the barcode scanned
 *
 *  @return Type of the barcode
 */
@property(nonatomic, assign, readonly) MBBarcodeType barcodeType;

/**
 * The document type deduced from the recognized barcode
 *
 *  @return Type of the document
 */
@property(nonatomic, assign, readonly) MBIdBarcodeDocumentType documentType;

@end

NS_ASSUME_NONNULL_END
