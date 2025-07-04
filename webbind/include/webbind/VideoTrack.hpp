#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

class SourceBuffer;


class VideoTrack : public emlite::Val {
    explicit VideoTrack(Handle h) noexcept;

public:
    explicit VideoTrack(const emlite::Val &val) noexcept;
    static VideoTrack take_ownership(Handle h) noexcept;

    VideoTrack clone() const noexcept;
    jsbind::DOMString id() const;
    jsbind::DOMString kind() const;
    jsbind::DOMString label() const;
    jsbind::DOMString language() const;
    bool selected() const;
    void selected(bool value);
    SourceBuffer sourceBuffer() const;
};

