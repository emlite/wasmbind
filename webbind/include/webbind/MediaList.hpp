#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"


class MediaList : public emlite::Val {
    explicit MediaList(Handle h) noexcept;

public:
    explicit MediaList(const emlite::Val &val) noexcept;
    static MediaList take_ownership(Handle h) noexcept;

    MediaList clone() const noexcept;
    jsbind::String mediaText() const;
    void mediaText(const jsbind::String& value);
    unsigned long length() const;
    jsbind::String item(unsigned long index);
    jsbind::Undefined appendMedium(const jsbind::String& medium);
    jsbind::Undefined deleteMedium(const jsbind::String& medium);
};

