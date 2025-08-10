#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "EventTarget.hpp"
#include "enums.hpp"

namespace webbind {

/// Interface NetworkInformation
/// [`NetworkInformation`](https://developer.mozilla.org/en-US/docs/Web/API/NetworkInformation)
class NetworkInformation : public EventTarget {
    explicit NetworkInformation(Handle h) noexcept;
public:
    explicit NetworkInformation(const emlite::Val &val) noexcept;
    static NetworkInformation take_ownership(Handle h) noexcept;
    [[nodiscard]] NetworkInformation clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// [`NetworkInformation.type`](https://developer.mozilla.org/en-US/docs/Web/API/NetworkInformation/type)
    /// [`NetworkInformation.type`](https://developer.mozilla.org/en-US/docs/Web/API/NetworkInformation/type)
    [[nodiscard]] ConnectionType type() const;
    /// [`NetworkInformation.effectiveType`](https://developer.mozilla.org/en-US/docs/Web/API/NetworkInformation/effectiveType)
    /// [`NetworkInformation.effectiveType`](https://developer.mozilla.org/en-US/docs/Web/API/NetworkInformation/effectiveType)
    [[nodiscard]] EffectiveConnectionType effectiveType() const;
    /// [`NetworkInformation.downlinkMax`](https://developer.mozilla.org/en-US/docs/Web/API/NetworkInformation/downlinkMax)
    /// [`NetworkInformation.downlinkMax`](https://developer.mozilla.org/en-US/docs/Web/API/NetworkInformation/downlinkMax)
    [[nodiscard]] jsbind::Any downlinkMax() const;
    /// [`NetworkInformation.downlink`](https://developer.mozilla.org/en-US/docs/Web/API/NetworkInformation/downlink)
    /// [`NetworkInformation.downlink`](https://developer.mozilla.org/en-US/docs/Web/API/NetworkInformation/downlink)
    [[nodiscard]] jsbind::Any downlink() const;
    /// [`NetworkInformation.rtt`](https://developer.mozilla.org/en-US/docs/Web/API/NetworkInformation/rtt)
    /// [`NetworkInformation.rtt`](https://developer.mozilla.org/en-US/docs/Web/API/NetworkInformation/rtt)
    [[nodiscard]] jsbind::Any rtt() const;
    /// [`NetworkInformation.onchange`](https://developer.mozilla.org/en-US/docs/Web/API/NetworkInformation/onchange)
    /// [`NetworkInformation.onchange`](https://developer.mozilla.org/en-US/docs/Web/API/NetworkInformation/onchange)
    [[nodiscard]] jsbind::Any onchange() const;
    /// Setter of the `onchange` attribute.
    /// [`NetworkInformation.onchange`](https://developer.mozilla.org/en-US/docs/Web/API/NetworkInformation/onchange)
    void onchange(const jsbind::Any& value);
    /// [`NetworkInformation.saveData`](https://developer.mozilla.org/en-US/docs/Web/API/NetworkInformation/saveData)
    /// [`NetworkInformation.saveData`](https://developer.mozilla.org/en-US/docs/Web/API/NetworkInformation/saveData)
    [[nodiscard]] bool saveData() const;
};

} // namespace webbind