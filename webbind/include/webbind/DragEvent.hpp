#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "MouseEvent.hpp"
#include "enums.hpp"

class DataTransfer;


class DragEvent : public MouseEvent {
    explicit DragEvent(Handle h) noexcept;

public:
    explicit DragEvent(const emlite::Val &val) noexcept;
    static DragEvent take_ownership(Handle h) noexcept;

    DragEvent clone() const noexcept;
    DragEvent(const jsbind::DOMString& type);
    DragEvent(const jsbind::DOMString& type, const jsbind::Any& eventInitDict);
    DataTransfer dataTransfer() const;
};

