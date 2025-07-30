#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

class USBAlternateInterface;
class USBConfiguration;


class USBInterface : public emlite::Val {
    explicit USBInterface(Handle h) noexcept;

public:
    explicit USBInterface(const emlite::Val &val) noexcept;
    static USBInterface take_ownership(Handle h) noexcept;

    USBInterface clone() const noexcept;
    USBInterface(const USBConfiguration& configuration, unsigned char interfaceNumber);
    unsigned char interfaceNumber() const;
    USBAlternateInterface alternate() const;
    jsbind::TypedArray<USBAlternateInterface> alternates() const;
    bool claimed() const;
};

