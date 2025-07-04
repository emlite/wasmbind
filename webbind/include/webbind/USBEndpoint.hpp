#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

class USBAlternateInterface;


class USBEndpoint : public emlite::Val {
    explicit USBEndpoint(Handle h) noexcept;

public:
    explicit USBEndpoint(const emlite::Val &val) noexcept;
    static USBEndpoint take_ownership(Handle h) noexcept;

    USBEndpoint clone() const noexcept;
    USBEndpoint(const USBAlternateInterface& alternate, unsigned char endpointNumber, const USBDirection& direction);
    unsigned char endpointNumber() const;
    USBDirection direction() const;
    USBEndpointType type() const;
    unsigned long packetSize() const;
};

