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
    jsbind::CSSOMString mediaText() const;
    void mediaText(const jsbind::CSSOMString& value);
    unsigned long length() const;
    jsbind::CSSOMString item(unsigned long index);
    jsbind::Undefined appendMedium(const jsbind::CSSOMString& medium);
    jsbind::Undefined deleteMedium(const jsbind::CSSOMString& medium);
};

