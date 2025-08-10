#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "enums.hpp"

namespace webbind {

class USBAlternateInterface;

/// Interface USBEndpoint
/// [`USBEndpoint`](https://developer.mozilla.org/en-US/docs/Web/API/USBEndpoint)
class USBEndpoint : public emlite::Val {
    explicit USBEndpoint(Handle h) noexcept;
public:
    explicit USBEndpoint(const emlite::Val &val) noexcept;
    static USBEndpoint take_ownership(Handle h) noexcept;
    [[nodiscard]] USBEndpoint clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// The `new USBEndpoint(..)` constructor, creating a new USBEndpoint instance
    USBEndpoint(const USBAlternateInterface& alternate, unsigned char endpointNumber, const USBDirection& direction);
    /// Getter of the `endpointNumber` attribute.
    /// [`USBEndpoint.endpointNumber`](https://developer.mozilla.org/en-US/docs/Web/API/USBEndpoint/endpointNumber)
    [[nodiscard]] unsigned char endpointNumber() const;
    /// Getter of the `direction` attribute.
    /// [`USBEndpoint.direction`](https://developer.mozilla.org/en-US/docs/Web/API/USBEndpoint/direction)
    [[nodiscard]] USBDirection direction() const;
    /// Getter of the `type` attribute.
    /// [`USBEndpoint.type`](https://developer.mozilla.org/en-US/docs/Web/API/USBEndpoint/type)
    [[nodiscard]] USBEndpointType type() const;
    /// Getter of the `packetSize` attribute.
    /// [`USBEndpoint.packetSize`](https://developer.mozilla.org/en-US/docs/Web/API/USBEndpoint/packetSize)
    [[nodiscard]] unsigned long packetSize() const;
};

} // namespace webbind