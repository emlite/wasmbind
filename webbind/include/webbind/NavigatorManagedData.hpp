#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "EventTarget.hpp"

namespace webbind {

/// Interface NavigatorManagedData
/// [`NavigatorManagedData`](https://developer.mozilla.org/en-US/docs/Web/API/NavigatorManagedData)
class NavigatorManagedData : public EventTarget {
    explicit NavigatorManagedData(Handle h) noexcept;
public:
    explicit NavigatorManagedData(const emlite::Val &val) noexcept;
    static NavigatorManagedData take_ownership(Handle h) noexcept;
    [[nodiscard]] NavigatorManagedData clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// The getManagedConfiguration method.
    /// [`NavigatorManagedData.getManagedConfiguration`](https://developer.mozilla.org/en-US/docs/Web/API/NavigatorManagedData/getManagedConfiguration)
    jsbind::Promise<jsbind::Record<jsbind::String, jsbind::Object>> getManagedConfiguration(const jsbind::TypedArray<jsbind::String>& keys);
    /// [`NavigatorManagedData.onmanagedconfigurationchange`](https://developer.mozilla.org/en-US/docs/Web/API/NavigatorManagedData/onmanagedconfigurationchange)
    /// [`NavigatorManagedData.onmanagedconfigurationchange`](https://developer.mozilla.org/en-US/docs/Web/API/NavigatorManagedData/onmanagedconfigurationchange)
    [[nodiscard]] jsbind::Any onmanagedconfigurationchange() const;
    /// Setter of the `onmanagedconfigurationchange` attribute.
    /// [`NavigatorManagedData.onmanagedconfigurationchange`](https://developer.mozilla.org/en-US/docs/Web/API/NavigatorManagedData/onmanagedconfigurationchange)
    void onmanagedconfigurationchange(const jsbind::Any& value);
    /// The getAnnotatedAssetId method.
    /// [`NavigatorManagedData.getAnnotatedAssetId`](https://developer.mozilla.org/en-US/docs/Web/API/NavigatorManagedData/getAnnotatedAssetId)
    jsbind::Promise<jsbind::String> getAnnotatedAssetId();
    /// The getAnnotatedLocation method.
    /// [`NavigatorManagedData.getAnnotatedLocation`](https://developer.mozilla.org/en-US/docs/Web/API/NavigatorManagedData/getAnnotatedLocation)
    jsbind::Promise<jsbind::String> getAnnotatedLocation();
    /// The getDirectoryId method.
    /// [`NavigatorManagedData.getDirectoryId`](https://developer.mozilla.org/en-US/docs/Web/API/NavigatorManagedData/getDirectoryId)
    jsbind::Promise<jsbind::String> getDirectoryId();
    /// The getHostname method.
    /// [`NavigatorManagedData.getHostname`](https://developer.mozilla.org/en-US/docs/Web/API/NavigatorManagedData/getHostname)
    jsbind::Promise<jsbind::String> getHostname();
    /// The getSerialNumber method.
    /// [`NavigatorManagedData.getSerialNumber`](https://developer.mozilla.org/en-US/docs/Web/API/NavigatorManagedData/getSerialNumber)
    jsbind::Promise<jsbind::String> getSerialNumber();
};

} // namespace webbind