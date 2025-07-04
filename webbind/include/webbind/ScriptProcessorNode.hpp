#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "AudioNode.hpp"
#include "enums.hpp"


class ScriptProcessorNode : public AudioNode {
    explicit ScriptProcessorNode(Handle h) noexcept;

public:
    explicit ScriptProcessorNode(const emlite::Val &val) noexcept;
    static ScriptProcessorNode take_ownership(Handle h) noexcept;

    ScriptProcessorNode clone() const noexcept;
    jsbind::Any onaudioprocess() const;
    void onaudioprocess(const jsbind::Any& value);
    long bufferSize() const;
};

