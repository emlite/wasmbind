#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

class Blob;


class PushMessageData : public emlite::Val {
    explicit PushMessageData(Handle h) noexcept;

public:
    explicit PushMessageData(const emlite::Val &val) noexcept;
    static PushMessageData take_ownership(Handle h) noexcept;

    PushMessageData clone() const noexcept;
    jsbind::ArrayBuffer arrayBuffer();
    Blob blob();
    jsbind::Uint8Array bytes();
    jsbind::Any json();
    jsbind::String text();
};

