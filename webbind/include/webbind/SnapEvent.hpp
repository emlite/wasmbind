#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "Event.hpp"
#include "enums.hpp"

class Node;


class SnapEvent : public Event {
    explicit SnapEvent(Handle h) noexcept;

public:
    explicit SnapEvent(const emlite::Val &val) noexcept;
    static SnapEvent take_ownership(Handle h) noexcept;

    SnapEvent clone() const noexcept;
    SnapEvent(const jsbind::DOMString& type);
    SnapEvent(const jsbind::DOMString& type, const jsbind::Any& eventInitDict);
    Node snapTargetBlock() const;
    Node snapTargetInline() const;
};

