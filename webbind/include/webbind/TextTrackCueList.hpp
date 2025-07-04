#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

class TextTrackCue;


class TextTrackCueList : public emlite::Val {
    explicit TextTrackCueList(Handle h) noexcept;

public:
    explicit TextTrackCueList(const emlite::Val &val) noexcept;
    static TextTrackCueList take_ownership(Handle h) noexcept;

    TextTrackCueList clone() const noexcept;
    unsigned long length() const;
    TextTrackCue getCueById(const jsbind::DOMString& id);
};

