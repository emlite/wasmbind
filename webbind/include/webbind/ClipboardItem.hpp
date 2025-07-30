#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

class Blob;


class ClipboardItem : public emlite::Val {
    explicit ClipboardItem(Handle h) noexcept;

public:
    explicit ClipboardItem(const emlite::Val &val) noexcept;
    static ClipboardItem take_ownership(Handle h) noexcept;

    ClipboardItem clone() const noexcept;
    ClipboardItem(const jsbind::Record<jsbind::String, jsbind::Any>& items);
    ClipboardItem(const jsbind::Record<jsbind::String, jsbind::Any>& items, const jsbind::Any& options);
    PresentationStyle presentationStyle() const;
    jsbind::TypedArray<jsbind::String> types() const;
    jsbind::Promise<Blob> getType(const jsbind::String& type);
    static bool supports(const jsbind::String& type);
};

