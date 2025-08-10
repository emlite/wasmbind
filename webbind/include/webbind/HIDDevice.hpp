#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "EventTarget.hpp"

namespace webbind {

class HIDCollectionInfo;

/// Interface HIDDevice
/// [`HIDDevice`](https://developer.mozilla.org/en-US/docs/Web/API/HIDDevice)
class HIDDevice : public EventTarget {
    explicit HIDDevice(Handle h) noexcept;
public:
    explicit HIDDevice(const emlite::Val &val) noexcept;
    static HIDDevice take_ownership(Handle h) noexcept;
    [[nodiscard]] HIDDevice clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// [`HIDDevice.oninputreport`](https://developer.mozilla.org/en-US/docs/Web/API/HIDDevice/oninputreport)
    /// [`HIDDevice.oninputreport`](https://developer.mozilla.org/en-US/docs/Web/API/HIDDevice/oninputreport)
    [[nodiscard]] jsbind::Any oninputreport() const;
    /// Setter of the `oninputreport` attribute.
    /// [`HIDDevice.oninputreport`](https://developer.mozilla.org/en-US/docs/Web/API/HIDDevice/oninputreport)
    void oninputreport(const jsbind::Any& value);
    /// [`HIDDevice.opened`](https://developer.mozilla.org/en-US/docs/Web/API/HIDDevice/opened)
    /// [`HIDDevice.opened`](https://developer.mozilla.org/en-US/docs/Web/API/HIDDevice/opened)
    [[nodiscard]] bool opened() const;
    /// [`HIDDevice.vendorId`](https://developer.mozilla.org/en-US/docs/Web/API/HIDDevice/vendorId)
    /// [`HIDDevice.vendorId`](https://developer.mozilla.org/en-US/docs/Web/API/HIDDevice/vendorId)
    [[nodiscard]] unsigned short vendorId() const;
    /// [`HIDDevice.productId`](https://developer.mozilla.org/en-US/docs/Web/API/HIDDevice/productId)
    /// [`HIDDevice.productId`](https://developer.mozilla.org/en-US/docs/Web/API/HIDDevice/productId)
    [[nodiscard]] unsigned short productId() const;
    /// [`HIDDevice.productName`](https://developer.mozilla.org/en-US/docs/Web/API/HIDDevice/productName)
    /// [`HIDDevice.productName`](https://developer.mozilla.org/en-US/docs/Web/API/HIDDevice/productName)
    [[nodiscard]] jsbind::String productName() const;
    /// [`HIDDevice.collections`](https://developer.mozilla.org/en-US/docs/Web/API/HIDDevice/collections)
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

} // namespace webbind