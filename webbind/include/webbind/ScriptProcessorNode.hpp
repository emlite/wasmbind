#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "AudioNode.hpp"
#include "enums.hpp"


/// The ScriptProcessorNode class.
/// [`ScriptProcessorNode`](https://developer.mozilla.org/en-US/docs/Web/API/ScriptProcessorNode)
class ScriptProcessorNode : public AudioNode {
    explicit ScriptProcessorNode(Handle h) noexcept;

public:
    explicit ScriptProcessorNode(const emlite::Val &val) noexcept;
    static ScriptProcessorNode take_ownership(Handle h) noexcept;

    [[nodiscard]] ScriptProcessorNode clone() const noexcept;
    /// Getter of the `onaudioprocess` attribute.
    /// [`ScriptProcessorNode.onaudioprocess`](https://developer.mozilla.org/en-US/docs/Web/API/ScriptProcessorNode/onaudioprocess)
    [[nodiscard]] jsbind::Any onaudioprocess() const;
    /// Setter of the `onaudioprocess` attribute.
    /// [`ScriptProcessorNode.onaudioprocess`](https://developer.mozilla.org/en-US/docs/Web/API/ScriptProcessorNode/onaudioprocess)
    void onaudioprocess(const jsbind::Any& value);
    /// Getter of the `bufferSize` attribute.
    /// [`ScriptProcessorNode.bufferSize`](https://developer.mozilla.org/en-US/docs/Web/API/ScriptProcessorNode/bufferSize)
    [[nodiscard]] long bufferSize() const;
};

