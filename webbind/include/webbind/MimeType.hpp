#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

class Plugin;


class MimeType : public emlite::Val {
    explicit MimeType(Handle h) noexcept;

public:
    explicit MimeType(const emlite::Val &val) noexcept;
    static MimeType take_ownership(Handle h) noexcept;

    MimeType clone() const noexcept;
    jsbind::String type() const;
    jsbind::String description() const;
    jsbind::String suffixes() const;
    Plugin enabledPlugin() const;
};

