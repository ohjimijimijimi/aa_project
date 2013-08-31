<?php
/**
 * @file
 * aa_project.default_breakpoint_group.inc
 */

/**
 * Implements hook_default_breakpoint_group().
 */
function aa_project_default_breakpoint_group() {
  $export = array();

  // Breakpoints.
  $breakpoints = array();
  $breakpoints[] = 'custom.aa_theme.mobile';
  $breakpoints[] = 'custom.aa_theme.normal';

  // Breakpoint group.
  $breakpoint_group = new stdClass();
  $breakpoint_group->disabled = FALSE; /* Edit this to true to make a default breakpoint_group disabled initially */
  $breakpoint_group->api_version = 1;
  $breakpoint_group->machine_name = 'aa_project_content';
  $breakpoint_group->name = 'AA project content';
  $breakpoint_group->breakpoints = $breakpoints;
  $breakpoint_group->type = 'custom';
  $breakpoint_group->overridden = 0;
  $export['aa_project_content'] = $breakpoint_group;

  // Breakpoints.
  $breakpoints = array();
  $breakpoints[] = 'custom.aa_theme.mobile';
  $breakpoints[] = 'custom.aa_theme.normal';

  // Breakpoint group.
  $breakpoint_group = new stdClass();
  $breakpoint_group->disabled = FALSE; /* Edit this to true to make a default breakpoint_group disabled initially */
  $breakpoint_group->api_version = 1;
  $breakpoint_group->machine_name = 'aa_project_preview';
  $breakpoint_group->name = 'AA project preview';
  $breakpoint_group->breakpoints = $breakpoints;
  $breakpoint_group->type = 'custom';
  $breakpoint_group->overridden = 0;
  $export['aa_project_preview'] = $breakpoint_group;

  return $export;
}
