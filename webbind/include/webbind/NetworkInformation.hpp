#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "EventTarget.hpp"
#include "enums.hpp"


/// The NetworkInformation class.
/// [`NetworkInformation`](https://developer.mozilla.org/en-US/docs/Web/API/NetworkInformation)
class NetworkInformation : public EventTarget {
    explicit NetworkInformation(Handle h) noexcept;

public:
    explicit NetworkInformation(const emlite::Val &val) noexcept;
    static NetworkInformation take_ownership(Handle h) noexcept;

    [[nodiscard]] NetworkInformation clone() const noexcept;
    /// Getter of the `type` attribute.
    /// [`NetworkInformation.type`](https://developer.mozilla.org/en-US/docs/Web/API/NetworkInformation/type)
    [[nodiscard]] ConnectionType type() const;
    /// Getter of the `effectiveType` attribute.
    /// [`NetworkInformation.effectiveType`](https://developer.mozilla.org/en-US/docs/Web/API/NetworkInformation/effectiveType)
    [[nodiscard]] EffectiveConnectionType effectiveType() const;
    /// Getter of the `downlinkMax` attribute.
    /// [`NetworkInformation.downlinkMax`](https://developer.mozilla.org/en-US/docs/Web/API/NetworkInformation/downlinkMax)
    [[nodiscard]] jsbind::Any downlinkMax() const;
    /// Getter of the `downlink` attribute.
    /// [`NetworkInformation.downlink`](https://developer.mozilla.org/en-US/docs/Web/API/NetworkInformation/downlink)
    [[nodiscard]] jsbind::Any downlink() const;
    /// Getter of the `rtt` attribute.
    /// [`NetworkInformation.rtt`](https://developer.mozilla.org/en-US/docs/Web/API/NetworkInformation/rtt)
    [[nodiscard]] jsbind::Any rtt() const;
    /// Getter of the `onchange` attribute.
    /// [`NetworkInformation.onchange`](https://developer.mozilla.org/en-US/docs/Web/API/NetworkInformation/onchange)
    [[nodiscard]] jsbind::Any onchange() const;
    /// Setter of the `onchange` attribute.
    /// [`NetworkInformation.onchange`](https://developer.mozilla.org/en-US/docs/Web/API/NetworkInformation/onchange)
    void onchange(const jsbind::Any& value);
    /// Getter of the `saveData` attribute.
    /// [`NetworkInformation.saveData`](https://developer.mozilla.org/en-US/docs/Web/API/NetworkInformation/saveData)
    [[nodiscard]] bool saveData() const;
};

