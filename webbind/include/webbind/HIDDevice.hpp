#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "EventTarget.hpp"
#include "enums.hpp"

class HIDCollectionInfo;


class HIDCollectionInfo : public emlite::Val {
  explicit HIDCollectionInfo(Handle h) noexcept;
public:
    static HIDCollectionInfo take_ownership(Handle h) noexcept;
    explicit HIDCollectionInfo(const emlite::Val &val) noexcept;
    HIDCollectionInfo() noexcept;
    HIDCollectionInfo clone() const noexcept;
    unsigned short usagePage() const;
    void usagePage(unsigned short value);
    unsigned short usage() const;
    void usage(unsigned short value);
    unsigned char type() const;
    void type(unsigned char value);
    jsbind::Sequence<HIDCollectionInfo> children() const;
    void children(const jsbind::Sequence<HIDCollectionInfo>& value);
    jsbind::Sequence<jsbind::Any> inputReports() const;
    void inputReports(const jsbind::Sequence<jsbind::Any>& value);
    jsbind::Sequence<jsbind::Any> outputReports() const;
    void outputReports(const jsbind::Sequence<jsbind::Any>& value);
    jsbind::Sequence<jsbind::Any> featureReports() const;
    void featureReports(const jsbind::Sequence<jsbind::Any>& value);
};

class HIDDevice : public EventTarget {
    explicit HIDDevice(Handle h) noexcept;

public:
    explicit HIDDevice(const emlite::Val &val) noexcept;
    static HIDDevice take_ownership(Handle h) noexcept;

    HIDDevice clone() const noexcept;
    jsbind::Any oninputreport() const;
    void oninputreport(const jsbind::Any& value);
    bool opened() const;
    unsigned short vendorId() const;
    unsigned short productId() const;
    jsbind::DOMString productName() const;
    jsbind::FrozenArray<HIDCollectionInfo> collections() const;
    jsbind::Promise<jsbind::Undefined> open();
    jsbind::Promise<jsbind::Undefined> close();
    jsbind::Promise<jsbind::Undefined> forget();
    jsbind::Promise<jsbind::Undefined> sendReport(unsigned char reportId, const jsbind::Any& data);
    jsbind::Promise<jsbind::Undefined> sendFeatureReport(unsigned char reportId, const jsbind::Any& data);
    jsbind::Promise<jsbind::DataView> receiveFeatureReport(unsigned char reportId);
};

