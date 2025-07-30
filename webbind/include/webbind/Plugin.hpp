#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

class MimeType;


class Plugin : public emlite::Val {
    explicit Plugin(Handle h) noexcept;

public:
    explicit Plugin(const emlite::Val &val) noexcept;
    static Plugin take_ownership(Handle h) noexcept;

    Plugin clone() const noexcept;
    jsbind::String name() const;
    jsbind::String description() const;
    jsbind::String filename() const;
    unsigned long length() const;
    MimeType item(unsigned long index);
    MimeType namedItem(const jsbind::String& name);
};

