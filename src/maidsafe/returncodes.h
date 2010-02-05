/*
* ============================================================================
*
* Copyright [2009] maidsafe.net limited
*
* Description:  List of error codes
* Version:      1.0
* Created:      2009-10-12-13.48.44
* Revision:     none
* Compiler:     gcc
* Author:       Fraser Hutchison (fh), fraser.hutchison@maidsafe.net
* Company:      maidsafe.net limited
*
* The following source code is property of maidsafe.net limited and is not
* meant for external use.  The use of this code is governed by the license
* file LICENSE.TXT found in the root of this directory and also on
* www.maidsafe.net.
*
* You are not free to copy, amend or otherwise use this source code without
* the explicit written permission of the board of directors of maidsafe.net.
*
* ============================================================================
*/

#ifndef MAIDSAFE_RETURNCODES_H_
#define MAIDSAFE_RETURNCODES_H_

namespace maidsafe {

enum ReturnCode {
  // General
  kSuccess = 0,
  kGeneralError = -1,
  kIncorrectKeySize = -2,
  kUndefined = -3,

  // Authentication
  kAuthenticationError = -1001,
  kPasswordFailure = -1002,
  kUserDoesntExist = -1003,
  kUserExists = -1004,
  kInvalidUsernameOrPin = -1005,
  kPublicUsernameExists = -1006,

  // Buffer Packet Handler
  kBPError = -2001,
  kBPSerialiseError = -2002,
  kBPInfoSerialiseError = -2003,
  kBPParseError = -2004,
  kBPInfoParseError = -2005,
  kStoreNewBPError = -2006,
  kModifyBPError = -2007,
  kBPAddUserError = -2008,
  kBPStoreAddedUserError = -2009,
  kBPDeleteUserError = -2010,
  kBPStoreDeletedUserError = -2011,
  kBPRetrievalError = -2012,
  kBPMessagesRetrievalError = -2013,
  kGetBPInfoError = -2014,
  kBPAddMessageError = -2015,
  kBPAwaitingCallback = -2016,

  // Chunkstore
  kInvalidChunkType = -127,
  kChunkstoreError = -3001,
  kChunkFileDoesntExist = -3003,
  kErrorReadingChunkFile = -3004,
  kChunkstoreUninitialised = -3005,
  kChunkstoreFailedStore = -3006,
  kChunkstoreFailedDelete = -3007,
  kChunkstoreException = -3008,
  kHashCheckFailure = -3009,
  kChunkExistsInChunkstore = 3001,  // intentionally positive

  // Client Controller
  kClientControllerError = -4001,
  kClientControllerNotInitialised = -4002,

  // Data Atlas Handler
  kDataAtlasError = -5001,
  kDBDoesntExist = -5002,
  kDBOpenException = -5003,
  kDBCreateException = -5004,
  kDBReadWriteException = -5005,
  kDBCloseException = -5006,
  kDBCantFindFile = -5007,
  kDBCantFindDirKey = -5008,
  kParseDataMapError = -5009,
  kAddElementError = -5010,
  kModifyElementError = -5011,
  kRemoveElementError = -5012,
  kRenameElementError = -5013,
  kCopyElementError = -5014,
  kDataAtlasException = -5015,

  // Key Atlas Handler
  kKeyAtlasError = -6001,

  // Store Managers
  kStoreManagerError = -7001,
  kNotConnected = -7002,
  kLoadChunkFindValueFailure = -7003,
  kPreSendFindValueFailure = -7004,
  kPreSendChunkAlreadyExists = -7005,
  kPreSendOverwriteCached = -7006,
  kChunkNotInChunkstore = -7007,
  kGetRequestSigError = -7008,
  kGetStorePeerError = -7009,
  kSendPrepResponseUninitialised = -7010,
  kSendPrepPeerError = -7011,
  kSendPrepSignedSizeAltered = -7012,
  kSendPrepFailure = -7013,
  kSendPrepInvalidId = -7014,
  kSendPrepInvalidResponseSignature = -7015,
  kSendPrepInvalidContractSignature = -7016,
  kSendContentFailure = -7017,
  kStoreAlreadyCompleted = -7018,
  kStoreCancelled = -7019,
  kSendChunkFailure = -7020,
  kTaskCancelledOffline = -7021,
  kFindNodesError = -7022,
  kFindNodesFailure = -7023,
  kFindNodesParseError = -7024,
  kFindValueError = -7025,
  kFindValueFailure = -7026,
  kFindValueParseError = -7027,
  kLoadChunkFailure = -7028,
  kLoadedChunkEmpty = -7029,
  kGetChunkFailure = -7030,
  kDeleteSizeError = -7031,
  kSendPacketError = -7032,
  kSendPacketFailure = -7033,
  kSendPacketFindValueFailure = -7034,
  kSendPacketCached = -7035,
  kSendPacketAlreadyExists = -7036,
  kSendPacketUnknownExistsType = -7037,
  kSendPacketParseError = -7038,
  kDeletePacketFindValueFailure = -7039,
  kDeletePacketError = -7040,
  kDeletePacketParseError = -7041,
  kDeletePacketFailure = -7042,
  kCommonChecksumUndecided = -7043,
  kCommonChecksumMajority = -7044,
  kPacketUnknownType = -7045,
  kLoadPacketFailure = -7046,
  kStoreManagerException = -7047,
  kFindAccountHoldersError = -7048,
  kUploadCopiesPendingConsensus = -7049,
  kUploadCopiesFailedConsensus = -7050,
  kNoPublicKeyToCheck = -7051,

  // Message Handler (-8000)

  // Private Share Handler (-9000)

  // Session
  kEmptyConversationId = -10001,
  kNonExistentConversation = -10002,
  kExistingConversation = -10003,
  kLoadKeysFailure = -10004,
  kContactListFailure = -10005,

  // Self Encryption Handler (-11000)

  // Store Task Handler
  kStoreTaskHandlerError = -12001,
  kStoreTaskIncorrectParameter = -12002,
  kStoreTaskAlreadyExists = -12003,
  kStoreTaskNotFound = -12004,
  kStoreTaskNotFinished = -12005,
  kStoreTaskFinishedFail = -12006,
  kStoreTaskFinishedPass = 0,  // intentionally 0

  // Validator
  kValidatorNoParameters = -13001,
  kValidatorNoPrivateKey = -13002
};

}  // namespace maidsafe

namespace maidsafe_vault {

enum ReturnCode {
  // General
  kSuccess = maidsafe::kSuccess,
  kGeneralError = maidsafe::kGeneralError,
  kVaultOffline = -501,

  // Service
  kVaultServiceError = -1501,
  kVaultServiceUninitialisedFunction = -1502,
  kVaultServiceFindNodesError = -1503,
  kVaultServiceFindNodesFailure = -1504,
  kVaultServiceFindNodesTooFew = -1505,
  kAddToRefResponseUninitialised = -1506,
  kAddToRefResponseFailed = -1507,
  kAddToRefResponseError = -1508,
  kAmendAccountResponseUninitialised = -1509,
  kAmendAccountResponseFailed = -1510,
  kAmendAccountResponseError = -1511,
  kAccountStatusResponseUninitialised = -1512,
  kAccountStatusResponseFailed = -1513,
  kAccountStatusResponseError = -1514,
  kCacheChunkResponseUninitialised = -1515,
  kCacheChunkResponseError = -1516,

  // Vault

  // Vault Chunkstore
  kChunkstoreError = maidsafe::kChunkstoreError,
  kInvalidChunkType = maidsafe::kInvalidChunkType,
  kChunkstoreUninitialised = maidsafe::kChunkstoreUninitialised,
  kIncorrectKeySize = maidsafe::kIncorrectKeySize,
  kHashCheckFailure = maidsafe::kHashCheckFailure,
  kChunkstoreUpdateFailure = -3501,
  kPacketStoreValueExists = -3502,
  kPacketStoreFailure = -3503,
  kPacketAppendValueExists = -3504,
  kPacketAppendNotFound = -3505,
  kPacketAppendNotOwned = -3506,
  kPacketAppendFailure = -3507,
  kPacketOverwriteNotFound = -3508,
  kPacketOverwriteNotOwned = -3509,
  kPacketOverwriteFailure = -3510,
  kPacketDeleteNotFound = -3511,
  kPacketDeleteNotOwned = -3512,
  kPacketLoadNotFound = -3513,
  kNoSpaceForCaching = -3514,
  kNoCacheSpaceToClear = -3515,

  // Account Handler & Account Amendment Handler
  kAccountNotFound = -4501,
  kAccountExists = -4502,
  kAccountDeleteFailed = -4503,
  kAccountWrongAccountField = -4504,
  kAccountEmptyAlert = -4505,
  kAccountNotEnoughSpace = -4506,
  kAmendAccountTypeError = -4507,
  kAmendAccountCountError = -4508,
  kAccountAmendmentError = -4509,
  kAccountAmendmentPending = -4510,
  kAccountAmendmentNotFound = -4511,
  kAccountAmendmentUpdated = -4512,
  kAccountAmendmentFinished = -4513,

  // Chunk Info Handler
  kChunkInfoInvalidSize = -5501,
  kChunkInfoInvalidName = -5502,
  kChunkInfoCannotDelete = -5503

  // Vault Buffer Packet Handler
};

}  // namespace maidsafe_vault

#endif  // MAIDSAFE_RETURNCODES_H_
