//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>


@interface GEONetworkSessionTaskTransactionMetrics : PBCodable <NSCopying>
{
    double _connectEnd;
    double _connectStart;
    double _domainLookupEnd;
    double _domainLookupStart;
    double _fetchStart;
    double _requestEnd;
    double _requestStart;
    double _responseEnd;
    double _responseStart;
    double _secureConnectEnd;
    double _secureConnectStart;
    int _protocolName;
    int _resourceFetchType;
    BOOL _proxyConnection;
    BOOL _reusedConnection;
    CDStruct_60b58840 _flags;
}

+ (BOOL)isValid:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)readAll:(BOOL)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (int)StringAsResourceFetchType:(id)arg1;
- (id)resourceFetchTypeAsString:(int)arg1;
@property(nonatomic) BOOL hasResourceFetchType;
@property(nonatomic) int resourceFetchType;
@property(nonatomic) BOOL hasReusedConnection;
@property(nonatomic) BOOL reusedConnection;
@property(nonatomic) BOOL hasProxyConnection;
@property(nonatomic) BOOL proxyConnection;
- (int)StringAsProtocolName:(id)arg1;
- (id)protocolNameAsString:(int)arg1;
@property(nonatomic) BOOL hasProtocolName;
@property(nonatomic) int protocolName;
@property(nonatomic) BOOL hasResponseEnd;
@property(nonatomic) double responseEnd;
@property(nonatomic) BOOL hasResponseStart;
@property(nonatomic) double responseStart;
@property(nonatomic) BOOL hasRequestEnd;
@property(nonatomic) double requestEnd;
@property(nonatomic) BOOL hasRequestStart;
@property(nonatomic) double requestStart;
@property(nonatomic) BOOL hasConnectEnd;
@property(nonatomic) double connectEnd;
@property(nonatomic) BOOL hasSecureConnectEnd;
@property(nonatomic) double secureConnectEnd;
@property(nonatomic) BOOL hasSecureConnectStart;
@property(nonatomic) double secureConnectStart;
@property(nonatomic) BOOL hasConnectStart;
@property(nonatomic) double connectStart;
@property(nonatomic) BOOL hasDomainLookupEnd;
@property(nonatomic) double domainLookupEnd;
@property(nonatomic) BOOL hasDomainLookupStart;
@property(nonatomic) double domainLookupStart;
@property(nonatomic) BOOL hasFetchStart;
@property(nonatomic) double fetchStart;

@end
