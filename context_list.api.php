<?php

function hook_context_list_register_condition_display() {
  return array(
    'all' => 'ContextListConditionDisplay',
    'defaultcontent' => 'ContextListConditionDisplay_defaultcontent',
    'path' => 'ContextListConditionDisplay_path',
  );
}

function hook_context_list_register_reaction_display() {
  return array(
    'all' => 'ContextListReactionDisplay',
    'block' => 'ContextListReactionDisplay_block',
  );
}