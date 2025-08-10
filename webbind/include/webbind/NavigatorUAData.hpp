#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

class NavigatorUABrandVersion;
class UADataValues;
class UALowEntropyJSON;

/// Interface NavigatorUAData
/// [`NavigatorUAData`](https://developer.mozilla.org/en-US/docs/Web/API/NavigatorUAData)
class NavigatorUAData : public emlite::Val {
    explicit NavigatorUAData(Handle h) noexcept;
public:
    explicit NavigatorUAData(const emlite::Val &val) noexcept;
    static NavigatorUAData take_ownership(Handle h) noexcept;
    [[nodiscard]] NavigatorUAData clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// [`NavigatorUAData.brands`](https://developer.mozilla.org/en-US/docs/Web/API/NavigatorUAData/brands)
    /// [`NavigatorUAData.brands`](https://developer.mozilla.org/en-US/docs/Web/API/NavigatorUAData/brands)
    [[nodiscard]] jsbind::TypedArray<NavigatorUABrandVersion> brands() const;
    /// [`NavigatorUAData.mobile`](https://developer.mozilla.org/en-US/docs/Web/API/NavigatorUAData/mobile)
    /// [`NavigatorUAData.mobile`](https://developer.mozilla.org/en-US/docs/Web/API/NavigatorUAData/mobile)
    [[nodiscard]] bool mobile() const;
    /// [`NavigatorUAData.platform`](https://developer.mozilla.org/en-US/docs/Web/API/NavigatorUAData/platform)
    /// [`NavigatorUAData.platform`](https://developer.mozilla.org/en-US/docs/Web/API/NavigatorUAData/platform)
    [[nodiscard]] jsbind::String platform() const;
    /// The getHighEntropyValues method.
    /// [`NavigatorUAData.getHighEntropyValues`](https://developer.mozilla.org/en-US/docs/Web/API/NavigatorUAData/getHighEntropyValues)
    jsbind::Promise<UADataValues> getHighEntropyValues(const jsbind::TypedArray<jsbind::String>& hints);
    /// The toJSON method.
    /// [`NavigatorUAData.toJSON`](https://developer.mozilla.org/en-US/docs/Web/API/NavigatorUAData/toJSON)
    UALowEntropyJSON toJSON();
};

} // namespace webbind