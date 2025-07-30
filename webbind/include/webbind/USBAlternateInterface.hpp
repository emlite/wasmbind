#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

class USBEndpoint;
class USBInterface;


class USBAlternateInterface : public emlite::Val {
    explicit USBAlternateInterface(Handle h) noexcept;

public:
    explicit USBAlternateInterface(const emlite::Val &val) noexcept;
    static USBAlternateInterface take_ownership(Handle h) noexcept;

    USBAlternateInterface clone() const noexcept;
    USBAlternateInterface(const USBInterface& deviceInterface, unsigned char alternateSetting);
    unsigned char alternateSetting() const;
    unsigned char interfaceClass() const;
    unsigned char interfaceSubclass() const;
    unsigned char interfaceProtocol() const;
    jsbind::String interfaceName() const;
    jsbind::TypedArray<USBEndpoint> endpoints() const;
};

