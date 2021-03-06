/* Generated by RuntimeBrowser
   Image: /usr/lib/libAWDSupportFramework.dylib
 */

@interface AWDPushSent : PBCodable <NSCopying> {
    unsigned int _connectionType;
    unsigned int _dualChannelState;
    unsigned int _error;
    unsigned int _flushes;
    NSString *_guid;
    struct { 
        unsigned int timestamp : 1; 
        unsigned int connectionType : 1; 
        unsigned int dualChannelState : 1; 
        unsigned int error : 1; 
        unsigned int flushes : 1; 
        unsigned int linkQuality : 1; 
        unsigned int payloadSize : 1; 
        unsigned int sendDuration : 1; 
    } _has;
    int _linkQuality;
    unsigned int _payloadSize;
    unsigned int _sendDuration;
    unsigned long long _timestamp;
}

@property (nonatomic) unsigned int connectionType;
@property (nonatomic) unsigned int dualChannelState;
@property (nonatomic) unsigned int error;
@property (nonatomic) unsigned int flushes;
@property (nonatomic, retain) NSString *guid;
@property (nonatomic) BOOL hasConnectionType;
@property (nonatomic) BOOL hasDualChannelState;
@property (nonatomic) BOOL hasError;
@property (nonatomic) BOOL hasFlushes;
@property (nonatomic, readonly) BOOL hasGuid;
@property (nonatomic) BOOL hasLinkQuality;
@property (nonatomic) BOOL hasPayloadSize;
@property (nonatomic) BOOL hasSendDuration;
@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) int linkQuality;
@property (nonatomic) unsigned int payloadSize;
@property (nonatomic) unsigned int sendDuration;
@property (nonatomic) unsigned long long timestamp;

- (unsigned int)connectionType;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned int)dualChannelState;
- (unsigned int)error;
- (unsigned int)flushes;
- (id)guid;
- (BOOL)hasConnectionType;
- (BOOL)hasDualChannelState;
- (BOOL)hasError;
- (BOOL)hasFlushes;
- (BOOL)hasGuid;
- (BOOL)hasLinkQuality;
- (BOOL)hasPayloadSize;
- (BOOL)hasSendDuration;
- (BOOL)hasTimestamp;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (int)linkQuality;
- (void)mergeFrom:(id)arg1;
- (unsigned int)payloadSize;
- (BOOL)readFrom:(id)arg1;
- (unsigned int)sendDuration;
- (void)setConnectionType:(unsigned int)arg1;
- (void)setDualChannelState:(unsigned int)arg1;
- (void)setError:(unsigned int)arg1;
- (void)setFlushes:(unsigned int)arg1;
- (void)setGuid:(id)arg1;
- (void)setHasConnectionType:(BOOL)arg1;
- (void)setHasDualChannelState:(BOOL)arg1;
- (void)setHasError:(BOOL)arg1;
- (void)setHasFlushes:(BOOL)arg1;
- (void)setHasLinkQuality:(BOOL)arg1;
- (void)setHasPayloadSize:(BOOL)arg1;
- (void)setHasSendDuration:(BOOL)arg1;
- (void)setHasTimestamp:(BOOL)arg1;
- (void)setLinkQuality:(int)arg1;
- (void)setPayloadSize:(unsigned int)arg1;
- (void)setSendDuration:(unsigned int)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (unsigned long long)timestamp;
- (void)writeTo:(id)arg1;

@end
