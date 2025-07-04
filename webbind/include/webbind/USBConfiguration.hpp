#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

class USBInterface;
class USBDevice;


class USBConfiguration : public emlite::Val {
    explicit USBConfiguration(Handle h) noexcept;

public:
    explicit USBConfiguration(const emlite::Val &val) noexcept;
    static USBConfiguration take_ownership(Handle h) noexcept;

    USBConfiguration clone() const noexcept;
    USBConfiguration(const USBDevice& device, unsigned char configurationValue);
    unsigned char configurationValue() const;
    jsbind::DOMString configurationName() const;
    jsbind::FrozenArray<USBInterface> interfaces() const;
};

