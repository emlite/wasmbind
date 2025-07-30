#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"


class MediaError : public emlite::Val {
    explicit MediaError(Handle h) noexcept;

public:
    explicit MediaError(const emlite::Val &val) noexcept;
    static MediaError take_ownership(Handle h) noexcept;

    MediaError clone() const noexcept;
    unsigned short code() const;
    jsbind::String message() const;
};

