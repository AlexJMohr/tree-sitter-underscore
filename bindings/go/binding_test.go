package tree_sitter_underscore_test

import (
	"testing"

	tree_sitter "github.com/smacker/go-tree-sitter"
	"github.com/tree-sitter/tree-sitter-underscore"
)

func TestCanLoadGrammar(t *testing.T) {
	language := tree_sitter.NewLanguage(tree_sitter_underscore.Language())
	if language == nil {
		t.Errorf("Error loading Underscore grammar")
	}
}
