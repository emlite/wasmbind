#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

class Plugin;


class PluginArray : public emlite::Val {
    explicit PluginArray(Handle h) noexcept;

public:
    explicit PluginArray(const emlite::Val &val) noexcept;
    static PluginArray take_ownership(Handle h) noexcept;

    PluginArray clone() const noexcept;
    jsbind::Undefined refresh();
    unsigned long length() const;
    Plugin item(unsigned long index);
    Plugin namedItem(const jsbind::String& name);
};

