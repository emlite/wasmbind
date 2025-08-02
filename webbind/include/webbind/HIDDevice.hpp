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
    [[nodiscard]] HIDCollectionInfo clone() const noexcept;
    [[nodiscard]] unsigned short usagePage() const;
    void usagePage(unsigned short value);
    [[nodiscard]] unsigned short usage() const;
    void usage(unsigned short value);
    [[nodiscard]] unsigned char type() const;
    void type(unsigned char value);
    [[nodiscard]] jsbind::TypedArray<HIDCollectionInfo> children() const;
    void children(const jsbind::TypedArray<HIDCollectionInfo>& value);
    [[nodiscard]] jsbind::TypedArray<jsbind::Any> inputReports() const;
    void inputReports(const jsbind::TypedArray<jsbind::Any>& value);
    [[nodiscard]] jsbind::TypedArray<jsbind::Any> outputReports() const;
    void outputReports(const jsbind::TypedArray<jsbind::Any>& value);
    [[nodiscard]] jsbind::TypedArray<jsbind::Any> featureReports() const;
    void featureReports(const jsbind::TypedArray<jsbind::Any>& value);
};

/// The HIDDevice class.
/// [`HIDDevice`](https://developer.mozilla.org/en-US/docs/Web/API/HIDDevice)
class HIDDevice : public EventTarget {
    explicit HIDDevice(Handle h) noexcept;

public:
    explicit HIDDevice(const emlite::Val &val) noexcept;
    static HIDDevice take_ownership(Handle h) noexcept;

    [[nodiscard]] HIDDevice clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// Getter of the `oninputreport` attribute.
    /// [`HIDDevice.oninputreport`](https://developer.mozilla.org/en-US/docs/Web/API/HIDDevice/oninputreport)
    [[nodiscard]] jsbind::Any oninputreport() const;
    /// Setter of the `oninputreport` attribute.
    /// [`HIDDevice.oninputreport`](https://developer.mozilla.org/en-US/docs/Web/API/HIDDevice/oninputreport)
    void oninputreport(const jsbind::Any& value);
    /// Getter of the `opened` attribute.
    /// [`HIDDevice.opened`](https://developer.mozilla.org/en-US/docs/Web/API/HIDDevice/opened)
    [[nodiscard]] bool opened() const;
    /// Getter of the `vendorId` attribute.
    /// [`HIDDevice.vendorId`](https://developer.mozilla.org/en-US/docs/Web/API/HIDDevice/vendorId)
    [[nodiscard]] unsigned short vendorId() const;
    /// Getter of the `productId` attribute.
    /// [`HIDDevice.productId`](https://developer.mozilla.org/en-US/docs/Web/API/HIDDevice/productId)
    [[nodiscard]] unsigned short productId() const;
    /// Getter of the `productName` attribute.
    /// [`HIDDevice.productName`](https://developer.mozilla.org/en-US/docs/Web/API/HIDDevice/productName)
    [[nodiscard]] jsbind::String productName() const;
    /// Getter of the `collections` attribute.
    /// [`HIDDevice.collections`](https://developer.mozilla.org/en-US/docs/Web/API/HIDDevice/collections)
    [[nodiscard]] jsbind::TypedArray<HIDCollectionInfo> collections() const;
    /// The open method.
    /// [`HIDDevice.open`](https://developer.mozilla.org/en-US/docs/Web/API/HIDDevice/open)
    jsbind::Promise<jsbind::Undefined> open();
    /// The close method.
    /// [`HIDDevice.close`](https://developer.mozilla.org/en-US/docs/Web/API/HIDDevice/close)
    jsbind::Promise<jsbind::Undefined> close();
    /// The forget method.
    /// [`HIDDevice.forget`](https://developer.mozilla.org/en-US/docs/Web/API/HIDDevice/forget)
    jsbind::Promise<jsbind::Undefined> forget();
    /// The sendReport method.
    /// [`HIDDevice.sendReport`](https://developer.mozilla.org/en-US/docs/Web/API/HIDDevice/sendReport)
    jsbind::Promise<jsbind::Undefined> sendReport(unsigned char reportId, const jsbind::Any& data);
    /// The sendFeatureReport method.
    /// [`HIDDevice.sendFeatureReport`](https://developer.mozilla.org/en-US/docs/Web/API/HIDDevice/sendFeatureReport)
    jsbind::Promise<jsbind::Undefined> sendFeatureReport(unsigned char reportId, const jsbind::Any& data);
    /// The receiveFeatureReport method.
    /// [`HIDDevice.receiveFeatureReport`](https://developer.mozilla.org/en-US/docs/Web/API/HIDDevice/receiveFeatureReport)
    jsbind::Promise<jsbind::DataView> receiveFeatureReport(unsigned char reportId);
};

